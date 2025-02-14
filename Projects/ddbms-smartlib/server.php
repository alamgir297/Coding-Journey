<?php
error_reporting(0);
session_start();
// variables
$username="";
$email ="";
$erros= array();
//conect the database
$connect= mysqli_connect('localhost', 'root', '', 'smartlib') or die("Could not connect");
//register admin
if(isset($_POST['reg_admin'])){
    $username= $_POST['username'];
    $email= $_POST['email'];
    $server= $_POST['server'];

    $password1= $_POST['password1'];
    $password2= $_POST['password2'];
    $q1= $_POST['q1'];
    $q2= $_POST['q2'];
    $q3= $_POST['q3'];
    // form validation
    if($password1 != $password2) array_push($erros, "Passwords do not match!");
    if(strlen($username)>26) array_push($erros, "Too long username");
    if(strlen($password1)<4) array_push($erros, "Too short password");
    // check for existing user

    $user_check_query = "SELECT * FROM admin WHERE username='$username' LIMIT 1";
    $result= mysqli_query($connect, $user_check_query);
    $user =mysqli_fetch_assoc($result);
    if($user){
        if($user['username']==$username){
            array_push($erros, "Username already exists");
        }
    }
    if(count($erros)==0){
        $password= md5($password1); 

        $insertQuery= "INSERT INTO admin (username, server, email, password) VALUES ('$username', '$server', '$email', '$password')";
        mysqli_query($connect, $insertQuery);

        $_SESSION['username']= $username;
        $_SESSION['success_reg']= "You are now registered";

        header("location: dashboard.php");

    }
}

// // admin login
$login_error= array();
if(isset($_POST['login_admin'])){
    $username= $_POST['username'];
    $password= $_POST['password1'];
    if(empty($username)) array_push($login_error, "Cant be blank");

    $dpassword= md5($password); // password encryption
    $login_query= "SELECT username FROM admin WHERE username='$username' and password='$dpassword'";
    $results= mysqli_query($connect, $login_query);
    if(count($login_error)==0){
                
        if(mysqli_num_rows($results)){
            $_SESSION['username']=$username;
            // $_SESSION['success_log'] = "Logged in successfully";
            $userNow=$username;
            echo "Logged in successfully";
            header("location: dashboard.php");
        }
        else {
            array_push($login_error, "Wrong username/password...try again!");
        }

    }
}

//user registration
if(isset($_POST['reg_user'])){
    echo "got the form";
    $username= $_POST['username'];
    $email= $_POST['email'];
    $server= $_POST['server'];
    $dept= $_POST['dept'];
    $std_id= $_POST['std_id'];
    $bDate= $_POST['date'];
    $password1= $_POST['password1'];
    $password2= $_POST['password2'];
    $q1= $_POST['q1'];
    $q2= $_POST['q2'];
    $q3= $_POST['q3'];
    // form validation
    if($password1 != $password2) array_push($erros, "Passwords do not match!");
    if(strlen($username)>26) array_push($erros, "Too long username");
    if(strlen($password1)<4) array_push($erros, "Too short password");
    // check for existing user

    $user_check_query = "SELECT * FROM user WHERE username='$username' LIMIT 1";
    $result= mysqli_query($connect, $user_check_query);
    $user =mysqli_fetch_assoc($result);
    if($user){
        if($user['username']==$username){
            array_push($erros, "Username already exists");
        }
    }
    if(count($erros)==0){
        $password= md5($password1); 

        $insertQuery= "INSERT INTO user (username, email, server, std_id, birthdate, password) VALUES ('$username', '$email', '$server','$std_id', '$bDate', '$password')";
        mysqli_query($connect, $insertQuery);

        $_SESSION['username']= $username;
        $_SESSION['success_reg']= "You are now registered";

        header("location: user-profile.php");

    }
}
//user login
$login_error= array();
if(isset($_POST['login_user'])){
    $username= $_POST['username'];
    $password= $_POST['password1'];
    if(empty($username)) array_push($login_error, "Cant be blank");

    $dpassword= md5($password); // password encryption
    $login_query= "SELECT username FROM user WHERE username='$username' and password='$dpassword'";
    $results= mysqli_query($connect, $login_query);
    if(count($login_error)==0){
                
        if(mysqli_num_rows($results)){
            $_SESSION['username']=$username;
            // $_SESSION['success_log'] = "Logged in successfully";
            $userNow=$username;
            echo "Logged in successfully";
            header("location: user-profile.php");
        }
        else {
            array_push($login_error, "Wrong username/password...try again!");
        }

    }
}

//add books
if(isset($_POST['add_book'])){
    // Get file details
    $book_name = $_POST['book_name'];
    $dept_name = $_POST['dept_name'];
    $writer_name = $_POST['writer_name'];
    $quantity = $_POST['quantity'];

    // Handle file upload
    $target_dir = "images/";
    $target_file = $target_dir . basename($_FILES["cover_photo"]["name"]);
    $uploadOk = 1;
    $imageFileType = strtolower(pathinfo($target_file, PATHINFO_EXTENSION));

    // Check if image file is a actual image or fake image
    if(isset($_POST["submit"])) {
        $check = getimagesize($_FILES["cover_photo"]["tmp_name"]);
        if($check !== false) {
            echo "File is an image - " . $check["mime"] . ".";
            $uploadOk = 1;
        } else {
            echo "File is not an image.";
            $uploadOk = 0;
        }
    }

    // Check if file already exists
    if (file_exists($target_file)) {
        echo "Sorry, file already exists.";
        $uploadOk = 0;
    }

    // Check file size
    if ($_FILES["cover_photo"]["size"] > 500000) {
        echo "Sorry, your file is too large.";
        $uploadOk = 0;
    }

    // Allow certain file formats
    // if($imageFileType != "jpg" && $imageFileType != "png" && $imageFileType != "jpeg"
    // && $imageFileType != "gif" ) {
    //     echo "Sorry, only JPG, JPEG, PNG & GIF files are allowed.";
    //     $uploadOk = 0;
    // }

    // Check if $uploadOk is set to 0 by an error
    if ($uploadOk == 0) {
        echo "Sorry, your file was not uploaded.";
    // if everything is ok, try to upload file
    } else {
        if (move_uploaded_file($_FILES["cover_photo"]["tmp_name"], $target_file)) {
            echo "The file ". htmlspecialchars( basename( $_FILES["cover_photo"]["name"])). " has been uploaded.";
            
            // Now store the file path in the database along with other book details
            $cover_photo_path = $target_file;

            // Insert into database
            $insert_query = "INSERT INTO books (book_name, dept_name, writer_name, quantity, cover_photo_path) 
                            VALUES ('$book_name', '$dept_name', '$writer_name', '$quantity', '$cover_photo_path')";
            // Execute the query
            mysqli_query($connect, $insert_query);

        } else {
            echo "Sorry, there was an error uploading your file.";
        }
    }
    // $book_name= $_POST['book_name'];
    // $dept_name= $_POST['dept_name'];
    // $writer_name= $_POST['writer_name'];
    // $total= $_POST['total'];
    // // form validation

    $insertQuery= "INSERT INTO books (book_name, dept_name, writer_name, quantity) VALUES ('$book_name', '$dept_name', '$writer_name', '$total')";
    mysqli_query($connect, $insertQuery);
    $_SESSION['success_add']= "Books Added succesfully";

    header("location: dashboard.php");

  
}
// //forgot pass
// $validation= array();
// if(isset($_POST['forgot'])){
//     $q1= $_POST['q1'];
//     $q2= $_POST['q2'];
//     $q3= $_POST['q3'];
//     $username= $_POST['username'];
//     $success= "Validation is successful";
//     $query= " select q1,q2,q3,password,ogPass from user_info where username='$username'";
//     $result=mysqli_query($connect, $query);
//     $user =mysqli_fetch_assoc($result);
//     if($user){
//         if($user['q1']==$q1 && $user['q2']==$q2 && $user['q3']==$q3){
//             array_push($validation, $success);
//             array_push($validation, "Your password is:");
//             array_push($validation, $user['ogPass']);
//         }
//         else{
//             array_push($validation, "Wrong answer");
//         }
//     }
// }

//         // Receive JSON data from the request body
// // if(isset($_SESSION['username'])){
// //     $data = json_decode(file_get_contents("php://input"));
// // //  Access individual variables
// //     $accuracy = $data->accuracy;
// //     $wordCount = $data->wordCount;
// //     $maxTime = $data->tempT;
// //     $userNow= $_SESSION['username'];
// //     if($maxTime){
// //         $insertQuery= " INSERT INTO practice_info(username,accuracy, wordCount ,totalTime)
// //         VALUES('$userNow','$accuracy', '$wordCount','$maxTime')";
// //         mysqli_query($connect, $insertQuery);
// //     }
// // }
// if (isset($_SESSION['username'])) {
//     $data = json_decode(file_get_contents("php://input"));
//     // Access individual variables
//     $accuracy = $data->accuracy;
//     $wordCount = $data->wordCount;
//     $maxTime = $data->tempT;
//     $userNow = $_SESSION['username'];

//     if ($maxTime) {
//         $currentDate = date("Y-m-d"); // Get the current date in YYYY-MM-DD format
        
//         $insertQuery = "INSERT INTO practice_info (username, accuracy, wordCount, totalTime, date)
//                         VALUES ('$userNow', '$accuracy', '$wordCount', '$maxTime', '$currentDate')";
        
//         mysqli_query($connect, $insertQuery);
//     }
// }

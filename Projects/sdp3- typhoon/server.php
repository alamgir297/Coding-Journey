<?php
error_reporting(0);
session_start();

// variables
$username="";
$email ="";
$erros= array();
//conect the database
$connect= mysqli_connect('localhost', 'root', '', 'typhoon') or die("Could not connect");
//register users
if(isset($_POST['reg_user'])){
    $fullName= $_POST['fname'];
    $username= $_POST['username'];
    $email= $_POST['email'];
    $password1= $_POST['password1'];
    $password2= $_POST['password2'];
    $q1= $_POST['q1'];
    $q2= $_POST['q2'];
    $q3= $_POST['q3'];
// form validation
    if($password1 != $password2) array_push($erros, "Passwords do not match!");
    if(strlen($username)>26) array_push($erros, "Too long username");
    if(strlen($password1)<4) array_push($erros, "Too short password");
    //check for existing user

    $user_check_query = " SELECT * FROM user_info WHERE username='$username' LIMIT 1";
    $result= mysqli_query($connect, $user_check_query);
    $user =mysqli_fetch_assoc($result);
    if($user){
        if($user['username']==$username){
            array_push($erros, "Username already exists");
        }
    }
    if(count($erros)==0){
        $password= md5($password1); 

        $insertQuery= " INSERT INTO user_info(fullName,username, email, password,ogPass,q1,q2,q3)
        VALUES('$fullName','$username', '$email', '$password','$password1','$q1','$q2','$q3')";
        mysqli_query($connect, $insertQuery);

        $_SESSION['username']= $username;
        $_SESSION['success_reg']= "You are now registered";

        header("location: login.php");

    }
}

// user login
$userNow="";
$login_error= array();
if(isset($_POST['login_user'])){
    $username= $_POST['username'];
    $password= $_POST['password1'];
    if(empty($username)) array_push($login_error, "Cant be blank");
    $userNow=$username;


    $dpassword= md5($password); // password encryption
    $login_query= "SELECT username FROM user_info WHERE username='$username' and password='$dpassword'";
    $results= mysqli_query($connect, $login_query);
    if(count($login_error)==0){
                
        if(mysqli_num_rows($results)){
            $_SESSION['username']=$username;
            // $_SESSION['success_log'] = "Logged in successfully";
            $userNow=$username;
            echo "Logged in successfully";
            header("location: home.php");
        }
        else {
            array_push($login_error, "Wrong username/password...try again!");
        }

    }
}

//forgot pass
$validation= array();
if(isset($_POST['forgot'])){
    $q1= $_POST['q1'];
    $q2= $_POST['q2'];
    $q3= $_POST['q3'];
    $username= $_POST['username'];
    $success= "Validation is successful";
    $query= " select q1,q2,q3,password,ogPass from user_info where username='$username'";
    $result=mysqli_query($connect, $query);
    $user =mysqli_fetch_assoc($result);
    if($user){
        if($user['q1']==$q1 && $user['q2']==$q2 && $user['q3']==$q3){
            array_push($validation, $success);
            array_push($validation, "Your password is:");
            array_push($validation, $user['ogPass']);
        }
        else{
            array_push($validation, "Wrong answer");
        }
    }
}

        // Receive JSON data from the request body
// if(isset($_SESSION['username'])){
//     $data = json_decode(file_get_contents("php://input"));
// //  Access individual variables
//     $accuracy = $data->accuracy;
//     $wordCount = $data->wordCount;
//     $maxTime = $data->tempT;
//     $userNow= $_SESSION['username'];
//     if($maxTime){
//         $insertQuery= " INSERT INTO practice_info(username,accuracy, wordCount ,totalTime)
//         VALUES('$userNow','$accuracy', '$wordCount','$maxTime')";
//         mysqli_query($connect, $insertQuery);
//     }
// }
if (isset($_SESSION['username'])) {
    $data = json_decode(file_get_contents("php://input"));
    // Access individual variables
    $accuracy = $data->accuracy;
    $wordCount = $data->wordCount;
    $maxTime = $data->tempT;
    $userNow = $_SESSION['username'];

    if ($maxTime) {
        $currentDate = date("Y-m-d"); // Get the current date in YYYY-MM-DD format
        
        $insertQuery = "INSERT INTO practice_info (username, accuracy, wordCount, totalTime, date)
                        VALUES ('$userNow', '$accuracy', '$wordCount', '$maxTime', '$currentDate')";
        
        mysqli_query($connect, $insertQuery);
    }
}

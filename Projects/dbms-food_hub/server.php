<?php
error_reporting(0);
session_start();

// variables
$username="";
$email ="";
$erros= array();
//conect the database
$connect= mysqli_connect('localhost', 'root', '', 'food_hub') or die("Could not connect");
//register users
if(isset($_POST['reg_user'])){
    $fullName= $_POST['fullName'];
    $username= $_POST['username'];
    $email= $_POST['email'];
    $password1= $_POST['password1'];
    $password2= $_POST['password2'];
    $contact= $_POST['contact'];
    $address= $_POST['address'];
// form validation
    if($password1 != $password2) array_push($erros, "Passwords do not match!");
    if(strlen($username)>26) array_push($erros, "Too long username");
    if(strlen($password1)<4) array_push($erros, "Too short password");
    //check for existing user

    $user_check_query = " SELECT * FROM customer WHERE username='$username' LIMIT 1";
    $result= mysqli_query($connect, $user_check_query);
    $user =mysqli_fetch_assoc($result);
    if($user){
        if($user['username']==$username){
            array_push($erros, "Username already exists");
        }
    }
    if(count($erros)==0){
        // $password= md5($password1); // password hashing for security
        $password= md5($password1); // password hashing for security

        $insertQuery= " INSERT INTO customer(fullName, email, password, username, contact, address)
        VALUES('$fullName', '$email', '$password', '$username', '$contact', '$address')";
        mysqli_query($connect, $insertQuery);

        $_SESSION['username']= $username;
        $_SESSION['success_reg']= "You are now registered";

        header("location: login.php");

    }
}

// user login
$login_error= array();
if(isset($_POST['login_user'])){
    $username= $_POST['username'];
    $password= $_POST['password1'];
    if(empty($username)) array_push($login_error, "Cant be blank");
    if(empty($password)) array_push($login_error, "Cant be blank");


    $password= md5($password); // password encryption
    $login_query= "SELECT username FROM customer WHERE username='$username' and password='$password'";
    $results= mysqli_query($connect, $login_query);


    if(count($login_error)==0){
                
        if(mysqli_num_rows($results)){
            $_SESSION['username']=$username;
            $_SESSION['success_log'] = "Logged in successfully";
            // echo "Logged in successfully";
            header("location: index.php");
        }
        else {
            array_push($login_error, "Wrong username/password...try again!");
        }

    }
}


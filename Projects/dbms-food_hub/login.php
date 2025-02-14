<?php include('server.php') ?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Food Hub</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <img src="bg.jpg" alt="foodhub" class="bg">
    <div class="container">
        <div class="header">
             <h1 align="center">Welcome to Food Hub</h1>
            <h2 align= "center">Log in</h2>
            <h3 align="left">Log in using username</h3><br>
        </div>

        <form action="login.php" method= "post">
            <?php include('errors.php') ?>

            <div>
                <label for="username"> Username:</label>
                <input type="text" name="username" required placeholder="Enter username">
            </div>

            <div>
                <label for="password"> Password:</label>
                <input type="password" name="password1" required placeholder="Enter password">
            </div>
            
            <br><button class="btn" type="submit" name="login_user">Login</button><br>



        </form>
        <p align="left">Don't have a account?<a href="registration.php"> <b> Sign up</b></a></p><br>

    </div>
</body>
</html>
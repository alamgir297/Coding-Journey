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
    <script src="index.js"></script>
    <img src="bg.jpg" alt="foodhub" class="bg">
    <div class="container">

        <div class="header">
            <h1 align="center">Welcome to Food Hub</h1>
            <h2 align="center">Registration</h2><br>
         </div>

        <form action="registration.php" method= "post">
            <?php include('errors.php') ?>
            
            <h4 align="left">Fill all the required fields</h2><br>
            <div>
                <label for="fullName"> Full Name:</label> <br>
                <input type="text" name="fullName" required placeholder="Enter your name">
            </div>

            <div>
                <label for="username"> Username:</label><br>
                <input type="text" name="username" required placeholder="Enter your username">
            </div>

            <div>
                <label for="email"> Email:</label><br>
                <input type="text" name="email" required placeholder="Enter your email">
            </div>

            <div>
                <label for="password"> Password:</label><br>
                <input type="password" name="password1" required placeholder="At least 4 characters">
            </div>

            <div>
                <label for="password"> Confirm password:</label><br>
                <input type="password" name="password2" required placeholder="Enter password again">
            </div>

            <div>
                <label for="contact"> Contact:</label><br>
                <input type="text" name="contact" required placeholder="Your contact number">
            </div>

            <div>
                <label for="address"> Addres:</label><br>
                <input type="text" name="address" required placeholder="Your current addres">
            </div>

            <br><button class="btn" type="submit" name="reg_user">Submit</button> <br>

        </form>
        <p align="left">Have a account?<a href="login.php"> <b> Log in</b></a></p>


    </div>
</body>
</html>
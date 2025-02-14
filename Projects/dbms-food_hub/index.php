<?php
    session_start();

    if(isset($_SESSION['username'])){
        $_SESSION['msg']="You must be logged in to continue";
    }

    if(isset($_GET ['logout'])){
        session_destroy();
        unset($_SESSION['username']);
        header("location: index.php");
    }

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Home page</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <img src="bg.jpg" alt="foodhub" class="bg">

    <div class="banner">
        <div class="navbar">
                <?php if(isset($_SESSION['success_log'])) : ?>
                    <h5 align="left"><a href="profile.php"> Welcome <b><?php echo $_SESSION['username']?></b></a></h5>

                    <button class="btn" name="logout"><a href="index.php?logout='1'">logout</a></button>
                <?php endif ?>

            <ul>
                <li><a href="index.php">Home</a></li>
                <li><a href="menu.php">Menu</a></li>
                <li><a href="restaurant.php">Restuarants</a></li>
                <li><a href="about us.php">About us</a></li>

            </ul>
        </div>
        <div class="search">
            <form action="search.php" method="POST">
            <input type="text" name="search" required placeholder="Search items here" width="30px">
            <button class="search_btn" type="submit" name="search_item">Search</button>
            </form>
        </div>


        <div class="content">
            <h1>Food for everyone</h1>
            <p>We deliver to your doorstep, Order now on Foodhub</p>
            <button align="center" name="reglog" width="auto" class="reg-log"><a href="login.php">Register/login</a></button>

        </div>
    </div>

</body>
</html>
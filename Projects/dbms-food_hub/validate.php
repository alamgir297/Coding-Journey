<?php include('server.php')?>
<!DOCTYPE html>
<html lang="en">
<head>
    <?php $extract_items; ?>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>order place page</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <img src="bg.jpg" alt="foodhub" class="bg">

    <div class="banner">
        <div class="navbar">
            <ul>
                <li><a href="index.php">Home</a></li>
                <li><a href="menu.php">Menu</a></li>
                <li><a href="restaurant.php">Restuarants</a></li>
                <li><a href="about us.php">About us</a></li>
            </ul>
        </div>
        <button align="center" class="back_btn" name="go_back"><a href="menu.php">back</a></button>

    <div class="orderplace" align="center">
        <?php
            if(isset($_POST['pay_now'])){
                $username=$_SESSION['username'];
                $paidway=$_POST['method'];
                $amount= $_POST['amount'];
                echo $amount . "paid successfully <br/>";
                echo "your order is placed";
            }
        ?>
    </div>

    </div>

</body>
</html>
<!-- $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant WHERE 
                OR i_price LIKE '%$search%' OR R_name LIKE '%$search%' OR i_type LIKE '%$search%' "; -->

<?php include('server.php') ?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>restaurant page</title>
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
                <li><a href="menu.php">menu</a></li>
                <li><a href="restaurant.php">Restuarants</a></li>
                <li><a href="about us.php">About us</a></li>


            </ul>
        </div>
        <div class="profile">
            <h3 align="center"><?php echo $_SESSION['username']?>'s Profile</h3>
            <ul></ul>
        </div>
        <div class="heding">
            <div class="sort">
                <form action="" method="post" align="center">
                    <select name="option" id="sort" border="1">
                        <option value="profile">My Profile</option>
                        <option value="status">My orders</option>
                        <option value="location">Edit profile</option>
                    </select>
                    <input type="submit" value="Go">
                </form>
            </div>
        </div>
        <div class="menu_table">
            <form action="order.php" method="post">
                <table class="order_tabler" border="1">
                        <tr>
                            <th>Item Name</th>
                            <th>Quantity</th>
                            <th>Status</th>
                        </tr>
                        <?php
                            if(isset($_POST['option'])){
                                $username=$_SESSION['username'];
                                $query= "SELECT cust_id FROM customer WHERE username='$username'";
                                $result=mysqli_query($connect, $query);
                                $cust_id="";
                                while($row= mysqli_fetch_assoc($result)){
                                      $cust_id=$row['cust_id'];
                                } 
                                $option= $_POST['option'];
                                if($option=="status" or $option="profile"){
                                    $query="SELECT * FROM orders NATURAL JOIN item WHERE cust_id='$cust_id'";
                                }
                            }
                            else{
                                $query="SELECT * FROM orders NATURAL JOIN item WHERE cust_id='$cust_id'";
                            }
                            // $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ";
                            $result = mysqli_query($connect, $query);
                            $num_result = mysqli_num_rows($result);
                            if($num_result>0){
                                while($value =mysqli_fetch_array($result)){
                                    ?>
                                        <tr>
                                            <td><?php echo $value['i_name'];?></td>
                                            <td><?php echo $value['quantity'] ;?></td>
                                            <td><?php echo $value['O_status'] ;?></td>
                                        </tr>
                                    <?php
                                }
                            }
                        ?>
                </table>
            </form>
        </div>

    </div>

</body>
</html>
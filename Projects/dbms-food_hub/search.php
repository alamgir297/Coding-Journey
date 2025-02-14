<?php include('server.php') ?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>menu page</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <img src="bg.jpg" alt="foodhub" class="bg">

    <div class="banner">
        <div class="navbar">
                <?php if(isset($_SESSION['success_log'])) : ?>
                    <h5 align="left"> Welcome <b><?php echo $_SESSION['username']?></b></h5>

                    <button class="btn" name="logout"><a href="login.php?logout='1'">logout</a></button>

                <?php endif ?>

            <ul>
                <li><a href="index.php">Home</a></li>
                <li><a href="menu.php">menu</a></li>
                <li><a href="restaurant.php">Restuarants</a></li>
                <li><a href="about us.php">About us</a></li>


            </ul>
        </div>
        <div class="search">
            <form action="search.php" method="POST" align="center">
            <input type="text" name="search" required placeholder="Search items or restaurants here">
            <button class="search_btn" type="submit" name="search_item">Search</button>
            </form>
        </div>
        <div class="heding">
            <h4 align="center">This is our menu for today</h4>
        </div>
        <div class="menu_table">
            <form action="order.php" method="post">
                <table class="order_tabler" border="1">
                        <tr>
                            <th>Item Name</th>
                            <th>Price</th>
                            <th>Food type</th>
                            <th>Restaurant</th>
                            <th>Status</th>
                            <th>Item ID</th>
                            <th>
                                <button type="submit" name="buy_btn" class="button btn-danger">Buy</button>
                            </th>
                        </tr>
                        <?php
                            if(isset($_POST['search_item'])){
                                $search= $_POST['search'];
                            }
                            $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant WHERE i_name LIKE '%$search%' 
                            OR i_price LIKE '%$search%' OR R_name LIKE '%$search%' OR i_type LIKE '%$search%' ";
                        // $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ";
                            $result = mysqli_query($connect, $search_query);
                            $num_result = mysqli_num_rows($result);
                            if($num_result>0){
                                echo $num_result .'result(s) found';
                                while($value =mysqli_fetch_array($result)){
                                    ?>
                                        <tr>
                                            <td><?php echo $value['i_name'];?></td>
                                            <td><?php echo $value['i_price'] ;?></td>
                                            <td><?php echo $value['i_type'] ;?></td>
                                            <td><?php echo $value['R_name'] ;?></td>
                                            <td><?php echo $value['status'] ;?></td>
                                            <td><?= $value['i_id']; ?>
                                            </td>
                                            <td width="10px" text-align="center"><input type="checkbox" name="selected[]" id="selected" value=" <?= $value['i_id']; ?>"></td>
                                        </tr>
                                    <?php
                                }
                            }
                            else {
                                echo 'No result found';
                            }
                        ?>
                </table>
            </form>
        </div>

    </div>

</body>
</html>
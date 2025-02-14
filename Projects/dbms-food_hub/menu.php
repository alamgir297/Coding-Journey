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
        <div class="search">
            <form action="search.php" method="POST" align="center">
            <input type="text" name="search" required placeholder="Search items or restaurants here">
            <button class="search_btn" type="submit" name="search_item">Search</button>
            </form>
        </div>
        <div class="heding">
            <h4 align="center">This is our menu for today</h4>
            <div class="dropdown dropdown-sort-by">
                <form action="" method="post" align="center">
                    <select name="sort" id="sort" border="1">
                        <option value="i_name">Name</option>
                        <option value="i_price">Price</option>
                        <option value="i_type">Category</option>
                        <option value="desc">Descending order</option>
                    </select>
                    <input type="submit" value="Sort">
                </form>
                <form action="" method="post" align="center">
                <input type="text" name="range1" placeholder="From" width="15px">
                    <input type="text" name="range2" placeholder="To" width="15px">
                    <input type="submit" value="ShowItem" width="20px">
                </form>
    
            </div>
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
                            if(isset($_POST['sort'])){
                                $sort= $_POST['sort'];
                                if($sort=="desc"){
                                    $sort_qurry="SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ORDER BY i_name DESC";
                                }
                                else
                                    $sort_qurry="SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ORDER BY ".$sort." ASC";
                            }
                            else{
                                $sort_qurry="SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ORDER BY i_name ASC";
                            }
                            if(isset($_POST['range1'])){
                                $n1= $_POST['range1'];
                                $n2= $_POST['range2'];
                                echo $na1. " ". $n2;
                                $sort_qurry="SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant WHERE i_price BETWEEN ".$n1." AND ".$n2." ";
                            }

                            // $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ";
                            $result = mysqli_query($connect, $sort_qurry);
                            $num_result = mysqli_num_rows($result);
                            if($num_result>0){
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
                        ?>
                </table>
            </form>
        </div>

    </div>

</body>
</html>
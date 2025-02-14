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

        <?php
            $extract_items="";
            if(isset($_POST['buy_btn'])){
                $extract_items;
                $truncate_query= "TRUNCATE TABLE tmp";
                $truncate=mysqli_query($connect, $truncate_query);
                $items_selected= $_POST['selected'];
                $extract_items= implode(',', $items_selected);
                foreach($items_selected as $value){
                    $query= "INSERT INTO tmp(i_id) values ('$value')";
                    mysqli_query($connect, $query);
                }
                ?>
                <div class="menu_table">
                <form action="payment.php" method="post">
                    <table class="order_tabler" border="1" width="600px">
                        <tr>
                            <th>Item Name</th>
                            <th>Price</th>
                            <th>Quantity</th>
                            <th><button type="submit" name="payment_btn" class="button btn-danger">Payout</button></th>
                        </tr>
                        <?php
                            $search_query= " SELECT * FROM item NATURAL JOIN menu where i_id in($extract_items) and menu.status='Available'";
                            $result = mysqli_query($connect, $search_query);
                            $num_result = mysqli_num_rows($result);
                            if($num_result>0){
                                while($value =mysqli_fetch_array($result)){
                                    ?>
                                    <tr>
                                        <td><?php echo $value['i_name'];?></td>
                                        <td><?php echo $value['i_price'] ;?></td>
                                        <td width="10px" text-align="center"><input required type="text" name="quantity[]" id="qn"></td>
                                    </tr>
                                    <?php
                                }
                            }
                        ?>

                    </table>
                    </form>
                </div>
                <?php
            }
        ?>

    </div>

    </div>

</body>
</html>
<!-- $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant WHERE 
                OR i_price LIKE '%$search%' OR R_name LIKE '%$search%' OR i_type LIKE '%$search%' "; -->

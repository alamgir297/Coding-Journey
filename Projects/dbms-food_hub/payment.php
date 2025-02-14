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

    <div class="orderplace">
        <?php
            if(isset($_POST['payment_btn'])){
                $quantity= $_POST['quantity'];
                // for($i=0; $i<3; $i++){
                //     echo $quantity[$i];
                // }
                $query= "SELECT MAX(O_id) from orders";
                $result= mysqli_query($connect, $query);
                $O_id="";
                while($row= mysqli_fetch_assoc($result)){
                //   echo $row['MIN(O_id)'];
                  $O_id=$row['MAX(O_id)'];
                }
                $query= "SELECT i_id FROM tmp";
                $result= mysqli_query($connect, $query);
                $items=array();
                while($row= mysqli_fetch_assoc($result)){
                    $tmp= $row['i_id'];
                    array_push($items,$tmp);
                }
                $extract_items=implode(',',$items);
                $username=$_SESSION['username'];
                $query= "SELECT cust_id FROM customer WHERE username='$username'";
                $result=mysqli_query($connect, $query);
                $cust_id="";
                while($row= mysqli_fetch_assoc($result)){
                      $cust_id=$row['cust_id'];
                } 
                $current_oid=$O_id+1;
                $query=" SELECT * FROM item NATURAL JOIN tmp WHERE i_id IN($extract_items)";
                $result=mysqli_query($connect, $query);
                $num=count($quantity);
                if(mysqli_num_rows($result)>0){
                    $i=0;
                    while($row=mysqli_fetch_assoc($result) and $i<$num){
                        $i_id=$row['i_id'];
                        // echo $i_id ." <br/>";
                        // echo $tot_amount. " <br/>";
                        $qnt=$quantity[$i];
                        $tot_amount=$row['i_price']*$qnt;
                        $i++;
                        $insertQuery= " INSERT INTO orders(O_id, cust_id, i_id, quantity, tot_amount)
                        VALUES('$current_oid', '$cust_id', '$i_id', '$qnt', '$tot_amount')";
                        mysqli_query($connect, $insertQuery);
                    }
                }
                $query="SELECT *, SUM(tot_amount) as newsum FROM orders where O_id='$current_oid' ";
                $result=mysqli_query($connect, $query);
                $num_result=mysqli_num_rows($result);
                $total="";
                if($num_result>0){
                    while($row= mysqli_fetch_assoc($result)){
                        $total=$row['newsum'];
                    } 
                }

  ?>    
        <div class="payment">
        <form action="validate.php" method= "post" class="payment">
            <?php include('errors.php') ?>
            <div class="amount">
                <h4>Total amount <?php echo $total; ?> </h4>
            </div>
            <div>
                <label for="method"> Mthod:</label> <br>
                <input type="text" name="method" required placeholder="Enter your payment method">
            </div>

            <div>
                <label for="number"> Number:</label><br>
                <input type="text" name="number" required placeholder="Enter your number">
            </div>

            <div>
                <label for="amount"> Amount:</label><br>
                <input type="text" name="amount" required placeholder="Enter amount">
            </div>

            <div>
                <label for="password"> Password:</label><br>
                <input type="password" name="password1" required placeholder="Enter your password">
            </div>

            <br><button class="btn" type="submit" name="pay_now">Submit</button> <br>

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

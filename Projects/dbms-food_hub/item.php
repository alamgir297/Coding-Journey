<?php include('server.php') ?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>items page</title>
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
                <li><a href="#">Catagories</a></li>
                <li><a href="#">Restuarants</a></li>
                <li><a href="#">About us</a></li>


            </ul>
        </div>
        <div class="search">
            <form action="search.php" method="POST">
            <input type="text" name="search"  placeholder="Search items here">
            <button class="search_btn" type="submit" name="search_item">Search</button>
            </form>
        </div>
        <div class="heding">
            <h4 align="center">This are the items we serve</h4>
        </div>
        <div class="menu_table">
            <?php
                $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ";
                $result = mysqli_query($connect, $search_query);
                $num_result = mysqli_num_rows($result);
                echo "<table border='2' width='600'>
                <tr>
                    <th>Item Name</th>
                    <th>Price</th>
                    <th>Category</th>
                    <th>Restaurant</th>
                    <th>Status</th>
                </tr>";
                                
                while($row = mysqli_fetch_array($result))                
                {
                    echo "<tr>";                   
                    echo "<td>" . $row['i_name'] . "</td>";                 
                    echo "<td>" . $row['i_price'] . "</td>";                  
                    echo "<td>" . $row['i_type'] . "</td>";  
                    echo "<td>" . $row['R_name'] . "</td>";  
                    echo "<td>" . $row['status'] . "</td>";  

                    echo "</tr>";                   
                }
                echo "</table>";  
            ?>              
        </div>

    </div>

</body>
</html>



<!-- <?php
            if(isset($_POST['search_item'])){
                $search= $_POST['search'];
                $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant WHERE i_name LIKE '%$search%' ";
                $result = mysqli_query($connect, $search_query);
                $num_result = mysqli_num_rows($result);
                if($num_result>0){
                    echo "<h4 align='center'>
                        $num_result result(s) found for ($search)
                    </h4>";
                } 
                if($num_result>0){
                    echo "<table border='1' class='menu_table'>
                    <tr bgcolor='orang'>
                        <th>Item Name</th>
                        <th>Price</th>
                        <th>Category</th>
                        <th>Restaurant</th>
                        <th>Status</th>
                    </tr>";
                                      
                    while($row = mysqli_fetch_array($result))                
                      {
                        echo "<tr>";                   
                        echo "<td>" . $row['i_name'] . "</td>";                 
                        echo "<td>" . $row['i_price'] . "</td>";                  
                        echo "<td>" . $row['i_type'] . "</td>";  
                        echo "<td>" . $row['R_name'] . "</td>";  
                        echo "<td>" . $row['status'] . "</td>";  

                        echo "</tr>";                   
                      }
                    echo "</table>";                
                }
                else{
                    echo "No match found";
                }
            }

    ?> -->

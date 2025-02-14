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
        <div class="search">
            <form action="search.php" method="POST" align="center">
            <input type="text" name="search" required placeholder="Search items or restaurants here">
            <button class="search_btn" type="submit" name="search_item">Search</button>
            </form>
        </div>
        <div class="heding">
            <h4 align="center">This are the restaurants we serve from</h4>
            <div class="sort">
                <form action="" method="post" align="center">
                    <select name="sort" id="sort" border="1">
                        <option value="i_name">Name</option>
                        <option value="score">Score</option>
                        <option value="location">Location</option>
                        <option value="desc">Descending order</option>
                    </select>
                    <input type="submit" value="Sort">
                </form>
                <form action="" method="post" align="center">
                <input type="text" name="range1" placeholder="Min score" width="15px">
                    <input type="submit" value="Show" width="20px">
                </form>
    
            </div>
        </div>
        <div class="menu_table">
            <form action="order.php" method="post">
                <table class="order_tabler" border="1">
                        <tr>
                            <th>Restaurant Name</th>
                            <th>Location</th>
                            <th>Rating</th>
                        </tr>
                        <?php
                            if(isset($_POST['sort'])){
                                $sort= $_POST['sort'];
                                if($sort=="desc" or $sort=="score"){
                                    if($sort=="desc")
                                        $sort_qurry="SELECT * FROM restaurant NATURAL JOIN rating ORDER BY R_name DESC";
                                    else
                                        $sort_qurry="SELECT * FROM restaurant NATURAL JOIN rating ORDER BY score DESC";
                                }
                                else
                                    $sort_qurry="SELECT * FROM restaurant NATURAL JOIN rating ORDER BY ".$sort." ASC";
                            }
                            else{
                                $sort_qurry="SELECT * FROM restaurant NATURAL JOIN rating ORDER BY R_name ASC";
                            }
                            if(isset($_POST['range1'])){
                                $n1= $_POST['range1'];
                                $sort_qurry="SELECT * FROM restaurant NATURAL JOIN rating WHERE score>= ".$n1." ";
                            }

                            // $search_query= " SELECT * FROM item NATURAL JOIN menu NATURAL JOIN restaurant ";
                            $result = mysqli_query($connect, $sort_qurry);
                            $num_result = mysqli_num_rows($result);
                            if($num_result>0){
                                while($value =mysqli_fetch_array($result)){
                                    ?>
                                        <tr>
                                            <td><?php echo $value['R_name'];?></td>
                                            <td><?php echo $value['location'] ;?></td>
                                            <td><?php echo $value['score'] ;?></td>
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
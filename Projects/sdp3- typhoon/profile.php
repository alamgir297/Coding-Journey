<?php include('server.php') ?>

<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Profile</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <link rel="stylesheet" href="style/style.css">
</head>
<body class="h-screen flex items-center justify-center flex-col">


    <div class="title text-center text-bold text-white text-6xl pb-6 font-[700]">My Profile</div>
    <div class="title text-center text-bold text-white text-2xl pb-6 font-[700]">Welcome: <?php echo $_SESSION['username'] ?></div>

    <video src="images/profile-background.mp4" autoplay muted loop class="absolute w-full h-full object-cover -z-10"></video>
    
    <div class="title text-center text-bold text-white text-4xl pb-6 font-[700]">All Time Statistics</div>
    ?>
    <div class="w-[90%] grid sm:grid-cols-2 lg:grid-cols-4 gap-5">
        <?php
            $userNow = $_SESSION['username'];

            // Overall statistics for the logged-in user
            $queryOverall = "SELECT 
                                SUM(totalTime) AS sum_totalTime,
                                AVG(accuracy) AS average_accuracy,
                                MAX(wordCount) AS max_wordCount,
                                AVG(wordCount) AS average_wordCount
                            FROM practice_info
                            WHERE username = '$userNow'";

            $resultOverall = $connect->query($queryOverall);
            $currentDate = date("Y-m-d"); // Get the current date in YYYY-MM-DD format

            if ($resultOverall) {
                $rowOverall = $resultOverall->fetch_assoc();
                $sumTime = number_format($rowOverall['sum_totalTime'] / 3600, 4);
                $averageAccuracy = number_format($rowOverall['average_accuracy'], 2);
                $maxWordCount = $rowOverall['max_wordCount'];
                $averageWordCount = number_format($rowOverall['average_wordCount'], 2);
            } else {
                echo "Error: " . $connect->error;
            }

            // Statistics for the logged-in user for the current date
            $queryToday = "SELECT 
                                SUM(totalTime) AS sum_totalTime,
                                AVG(accuracy) AS average_accuracy,
                                MAX(wordCount) AS max_wordCount,
                                AVG(wordCount) AS average_wordCount
                            FROM practice_info
                            WHERE username = '$userNow' AND date = $currentDate";

            $resultToday = $connect->query($queryToday);

            if ($resultToday) {
                $rowToday = $resultToday->fetch_assoc();
                $sumTimeToday = number_format($rowToday['sum_totalTime'] / 3600, 4);
                $averageAccuracyToday = number_format($rowToday['average_accuracy'], 2);
                $maxWordCountToday = $rowToday['max_wordCount'];
                $averageWordCountToday = number_format($rowToday['average_wordCount'], 2);
            } else {
                echo "Error: " . $connect->error;
            }
        ?>
        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Total Times: <?php echo "$sumTime hours" ?>
        </div>

        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Average accuracy: <?php echo "$averageAccuracy%" ?>
        </div>

        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Top Speed(WPM): <?php echo $maxWordCount ?>
        </div>

        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Average Speed(WPM): <?php echo $averageWordCount ?>
        </div>
    </div>
    <div class="title text-center mt-10 text-bold text-white text-4xl pb-6 font-[700]">Statistics for Today</div>
    <div class="w-[90%] grid sm:grid-cols-2 lg:grid-cols-4 gap-5">
        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Total Times:<?php echo "$sumTimeToday hours" ?>
        </div>

        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Average accuracy: <?php echo "$averageAccuracyToday%" ?>
        </div>

        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Top Speed(WPM): <?php echo $maxWordCountToday ?>
        </div>

        <div class="bg-white/50 rounded-xl flex items-center 
        justify-center font-[500] text-center py-[2px] px-2 md:py-4 text-xl">
        Average Speed(WPM): <?php echo $averageWordCountToday ?>
        </div>
    </div>
    <a href="home.php" class="bg-white/50 mt-10 rounded-xl flex items-center justify-center font-[500] text-center px-8 py-2 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">Exit</a>
</body>
</html>
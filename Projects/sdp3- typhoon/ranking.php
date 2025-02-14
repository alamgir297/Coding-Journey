<?php include('server.php') ?>
<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ranking</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <!-- <link rel="stylesheet" href="style/style.css"> -->
</head>
<body class="h-screen flex flex-col">

    <div class="title text-center text-bold text-black text-6xl pb-6 font-[700]">Ranking</div>
    <form action="" method="post" class="mb-4">
        <label for="ranking">Select Ranking:</label>
        <select name="ranking" id="ranking" class="px-2 py-1 border border-black">
            <option value="overall">Overall Ranking</option>
            <option value="individual">Individual Ranking</option>
        </select>
        <input type="submit" value="Show Ranking" class="px-4 py-2 bg-blue-500 text-white rounded-md cursor-pointer">
    </form>

    <table class="w-[75%] mx-auto">
        <!-- Your table headers and PHP data display -->
    </table>
    
    <a href="home.php" class="bg-white/50 border border-black border-[3px] px-[40px] fixed right-[20px] bottom-[15px] w-[50px] rounded-xl flex items-center justify-center font-[500] text-center px-8 py-2 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">Exit</a>
    <table class="w-[75%] mx-auto">
        <tr>
            <th class="border border-black w-[10%]">No</th>
            <th class="border border-black">User</th>
            <th class="border border-black">Accuracy</th>
            <th class="border border-black">Speed</th>
            <th class="border border-black">Score</th>
        </tr>
        <?php
            $query = "SELECT username, accuracy, wordCount FROM practice_info";
            $result = $connect->query($query);

            $userData = array();

            if ($result->num_rows > 0) {
                while ($row = $result->fetch_assoc()) {
                    $userData[] = array(
                        'username' => $row['username'],
                        'accuracy' => $row['accuracy'],
                        'wordCount' => $row['wordCount']
                    );
                }
            } else {
                echo "No data found";
            }
            $userScores = array();

            // Calculate total scores for each user
            foreach ($userData as $user) {
                $username = $user['username'];
                $score =(int) (($user['accuracy'] * $user['wordCount'])/10);

                // If the username exists, add the score, otherwise create a new entry
                if (array_key_exists($username, $userScores)) {
                    $userScores[$username] += $score;
                } else {
                    $userScores[$username] = $score;
                }
            }
            // Sort users by their total scores
            arsort($userScores);
            // Sort users by their individual scores
            usort($userData, function ($a, $b) {
                return ($b['accuracy'] * $b['wordCount']) - ($a['accuracy'] * $a['wordCount']);
            });
            if ($_SERVER["REQUEST_METHOD"] == "POST") {
                if (isset($_POST['ranking']) && ($_POST['ranking'] == 'overall')) {
                    // Show overall rankings based on $userScores
                    $overallRank = 1;
                    foreach ($userScores as $username => $totalScore) {
                        $userDataForUser = array_filter($userData, function ($user) use ($username) {
                            return $user['username'] === $username;
                        });
            
                        $averageAccuracy = array_sum(array_column($userDataForUser, 'accuracy')) / count($userDataForUser);
                        $topWordCount = max(array_column($userDataForUser, 'wordCount'));
            
                        ?>
                        <tr>
                            <td class="border border-black"><?php echo $overallRank; ?></td>
                            <td class="border border-black"><?php echo $username; ?></td>
                            <td class="border border-black"><?php echo number_format($averageAccuracy, 2); ?></td>
                            <td class="border border-black"><?php echo $topWordCount; ?></td>
                            <td class="border border-black"><?php echo $totalScore; ?></td>
                        </tr>
                        <?php
                        $overallRank++;
                    }
                } elseif (isset($_POST['ranking']) && ($_POST['ranking'] == 'individual')) {
                    // Show individual rankings based on $userData
                    $rank = 1;
                    foreach ($userData as $user) {
                        $score = (int)(($user['accuracy'] * $user['wordCount']) / 10);
                        ?>
                        <tr>
                            <td class="border border-black"><?php echo $rank; ?></td>
                            <td class="border border-black"><?php echo $user['username']; ?></td>
                            <td class="border border-black"><?php echo $user['accuracy']; ?></td>
                            <td class="border border-black"><?php echo $user['wordCount']; ?></td>
                            <td class="border border-black"><?php echo $score; ?></td>
                        </tr>
                        <?php
                        $rank++;
                    }
                }
            }

        ?>
    </table>
    
    
    <a href="home.php" class="bg-white/50 border border-black border-[3px] px-[40px] fixed right-[20px] bottom-[15px] w-[50px] rounded-xl flex items-center justify-center font-[500] text-center px-8 py-2 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">Exit</a>
</body>
</html>
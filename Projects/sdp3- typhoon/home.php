<?php include('server.php') ?>
<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Home</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <link rel="stylesheet" href="style/style.css">
</head>
<body class="h-screen flex items-center justify-center flex-col">

    
    <div class="title text-bold text-white text-6xl pb-6 font-[700]">Dashboard</div>
    <div class="title text-center text-bold text-white text-2xl pb-6 font-[700]">Welcome: <?php echo $_SESSION['username'] ?></div>

    <video src="images/background-video.mp4" autoplay muted loop class="absolute w-full h-full object-cover -z-10"></video>
    <div class="w-[90%] grid sm:grid-cols-2 gap-5">

        <a href="practice.php" class="bg-white/50 rounded-xl flex items-center justify-center font-[500] 
        text-center py-4 px-2 sm:py-16 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">
            Practice
        </a>

        <a href="typingtest.html" class="bg-white/50 rounded-xl flex items-center justify-center font-[500] 
        text-center py-4 px-2 sm:py-16 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">
            Test Typing Speed
        </a>

        <!-- <a href="playgame.html" class="bg-white/50 rounded-xl flex items-center justify-center font-[500] 
        text-center py-4 px-2 sm:py-16 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">
            Play Game
        </a> -->

        <a href="profile.php" class="bg-white/50 rounded-xl flex items-center justify-center font-[500] 
        text-center py-4 px-2 sm:py-16 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">
            Profile
        </a>

        <a href="ranking.php" class="bg-white/50 rounded-xl flex items-center justify-center font-[500] 
        text-center py-4 px-2 sm:py-16 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">
            Ranking
        </a>
        
        <a href="login.php" class="bg-white/50 rounded-xl flex items-center justify-center font-[500] 
        text-center py-4 px-2 sm:py-16 text-3xl hover:bg-black/80 hover:text-white hover:scale-110 duration-[0.2s]">
            Log out
        </a>

    </div>

</body>
</html>
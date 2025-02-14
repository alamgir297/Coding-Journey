<?php include('server.php') ?>

<!doctype html>
<html>

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./style/main.css">
    <link rel="stylesheet" href="./style/animation.css">
    <script src="https://cdn.tailwindcss.com"></script>
    <title>Admin-Registration</title>

</head>

<body class="bg-[#1c1c38]">

    <div id="animatedArea" class="hidden">
        <div class=" h-screen flex flex-col py-[50px] gap-[50px] container mx-auto">
            <h1 class="text-[#a5abb1] text-7xl text-center shadow-md rounded-xl shadow-gray-700 pb-10">Smart Lib</h1>


            <div
                class="form bg-[#101329] w-[50%] mx-auto shadow-md shadow-gray-700 rounded-xl p-10 text-[#a5abb1] text-lg">
                <h3 class="text-center text-2xl border-t-2 border-b-2 border-gray-400 py-4">Admin Registration</h3>

                <!-- login  -->
                <form action="admin-registration.php"  method="post">
        
                <?php include('errors.php') ?>

                <div >

                    <!-- <label for="fname" class="absolute">
                        <i class="fa-solid pt-4 pb-4 text-lg fa-user text-white"></i>
                    </label>
                    <input type="text" name="fname" required placeholder="Full Name" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none"> -->

                    <label for="uname" class="absolute">
                        <i class="fa-solid pt-4 pb-4 text-lg fa-user text-white"></i>
                    </label>
                    <input type="text" name="username" placeholder="User Name" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">
                
                    <label for="email" class="absolute">
                        <i class="fa-solid pt-4 pb-4 text-lg fa-envelope text-white"></i>
                    </label>
                    <input type="text" name="email" placeholder="Email" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">

                    <select class="bg-transparent placeholder:text-black border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none" name="server"
                        id="server">
                        <option value="select">Select Server</option>
                        <option value="dhaka">Dhaka</option>
                        <option value="chitagong">Chittagong</option>
                        <option value="cumilla">Cumilla</option>
                        <option value="barishal">Barishal</option>
                    </select>

                    <label for="pass" class="absolute">
                        <i class="fa-solid fa-lock pt-4 pb-4 text-lg text-white"></i>
                    </label>
                    <input type="password" name="password1" placeholder="Password" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">
                
                    <label for="pass" class="absolute">
                        <i class="fa-solid fa-lock pt-4 pb-4 text-lg text-white"></i>
                    </label>
                    <input type="password" name="password2" placeholder="Confirm Password" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">

                    <!-- <label for="1stqus" class="absolute">
                        <i class="fa-solid fa-question pt-4 pb-4 text-lg text-white"></i>
                    </label>
                    <input type="text" name="q1" placeholder="What is your Pet name?" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">

                    <label for="2ndqus" class="absolute">
                        <i class="fa-solid fa-question pt-4 pb-4 text-lg text-white"></i>
                    </label>
                    <input type="text" name="q2" placeholder="What is your favourite food?" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">

                    <label for="3rdqus" class="absolute">
                        <i class="fa-solid fa-question pt-4 pb-4 text-lg text-white"></i>
                    </label>
                    <input type="text" name="q3" placeholder="What is your favourite year?" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">           -->
                </div>

                <div class="buttondiv" style="display: flex; justify-content: center;">
                        <button class="btn btn-secondary inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
                    text-center text-xl px-[20px] py-[10px] rounded-xl font-bold 
                    hover:from-indigo-500 hover:to-purple-800 transition mt-4" type="submit" name="reg_admin">Sign up</button>
                </div>
                <div class="text-white block text-center pt-4">Have an account?
                    <a href="admin-login.php" class="font-bold text-lg transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Log In</a>
                </div>

                </form> 
            </div>

        </div>

    </div>

    <script src="/script/animation.js"></script>
    <script src="/script/script.js"></script>
</body>

</html>

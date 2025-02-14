<?php include('server.php') ?>
<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./style/main.css">
    <link rel="stylesheet" href="./style/animation.css">
    <script src="https://cdn.tailwindcss.com"></script>
    <title>Admin-Login</title>
    
</head>
<body class="bg-[#1c1c38]">
    
    <div id="animatedArea" class="hidden">
        <div class=" h-screen flex flex-col py-[50px] gap-[50px] container mx-auto">
            <h1 class="text-[#a5abb1] text-7xl text-center shadow-md rounded-xl shadow-gray-700 pb-10">Smart Lib</h1>
            
            
            <div class="form bg-[#101329] w-[50%] mx-auto shadow-md shadow-gray-700 rounded-xl p-10 text-[#a5abb1] text-lg">
                <h3 class="text-center text-2xl border-t-2 border-b-2 border-gray-400 py-4">Admin Authentication</h3>
                
                <!-- login  -->
                <form action="admin-login.php" class="w-full" method="post">
                    <?php include('errors.php') ?>
                    <div class="relative pl-14 pr-14">
                    <label for="username" class="absolute">
                        <i class="fa-solid pt-4 pb-4 text-lg fa-envelope text-white"></i>
                    </label>
                    <input type="text" name="username" placeholder="Username" 
                    class="bg-transparent placeholder:text-white border-b-2
                    pt-4 pb-4 text-xl ps-14 w-full text-white border-white duration-[1000s] !outline-none"><br>
                    
                    <label for="pass" class="absolute">
                        <i class="fa-solid fa-lock pt-4 pb-4 text-lg text-white"></i>
                    </label>
                    <input type="password" name="password1" placeholder="Password"
                    class="bg-transparent placeholder:text-white border-b-2
                    !outline-none pt-4 pb-4 text-xl text-white ps-14 w-full duration-[1000s] border-white"><br>
                    
                    <!-- <a href="forgetpassword.php" class="text-white inline-block text-center pt-4 pb-5 transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Forget Password?</a> -->
                    <!-- <a href="home.php" class="inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
                        text-center text-xl pb-4 rounded-xl font-bold pt-4 w-full 
                        hover:from-indigo-500 hover:to-purple-800 transition">
                        Login
                    </a> -->
                    </div>
                    <div class="buttondiv" style="display: flex; justify-content: center;">
                            <button class="btn btn-secondary inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
                        text-center text-xl px-[20px] py-[10px] rounded-xl font-bold 
                        hover:from-indigo-500 hover:to-purple-800 transition" type="submit" name="login_admin">Login</button>
                    </div>        
                    <a href="index.php" class="text-white block text-center pt-4">Or <b class="text-lg transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Go Back</b></a>
                </form> 
                <!-- <form action="admin-login.php" class="login-form pt-10 flex flex-col items-center justify-center gap-5" method="post">
                    <input class="px-5 py-2 bg-transparent border border-gray-400 rounded-md w-[70%]" type="text" placeholder="username" id = "username" required>
                    <input class="px-5 py-2 bg-transparent border border-gray-400 rounded-md w-[70%]" type="password" placeholder="password" id = "password" required>
                    <div class="flex items-center justify-center gap-2">
                        <button type="submit" id="submit_data" name="login_user" class="bg-[#101329] border hover:scale-105 hover:bg-[#151c44] transition-all duration-500 rounded-lg px-5 py-2 text-[#a5abb1] font-bold"> Login </button>
                        <button id="back_button" onclick="location.href='index.php'" class="bg-[#101329] border hover:scale-105 hover:bg-[#151c44] transition-all duration-500 rounded-lg px-5 py-2 text-[#a5abb1] font-bold">Back</button>
                    </div>
                </form> -->
                <button onclick="location.href='admin-registration.php'" class="text-center text-sm w-full py-1 mt-8">Not registered? <span class="text-green-400 pl-1">Create Account...</span></button>
            </div>

        </div>

    </div>

    <script src="/script/animation.js"></script>
    <script src="/script/script.js"></script>
</body>
</html>
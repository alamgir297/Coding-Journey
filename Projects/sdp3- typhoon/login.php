<?php include('server.php') ?>
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Log In</title>
  <script src="https://cdn.tailwindcss.com"></script>
  <link rel="stylesheet" href="style/style.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
</head>
<body class="h-screen bg-gradient-to-r from-purple-800 to-indigo-200">
  
    <div class="loginArea bg-white/20 w-[300px] sm:w-[450px] h-[500px] shadow-xl rounded-3xl flex flex-col items-center justify-center">
      
      <div class="title bg-gradient-to-r from-purple-800 to-indigo-600 text-transparent bg-clip-text text-bold text-5xl pb-6 font-[700] ">Log In</div>
      <form action="login.php" class="w-full" method="post">
        <?php include('errors.php') ?>
        <div class="relative pl-14 pr-14">
          <label for="email" class="absolute">
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
          
          <a href="forgetpassword.php" class="text-white inline-block text-center pt-4 pb-5 transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Forget Password?</a>
          <!-- <a href="home.html" class="inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
            text-center text-xl pb-4 rounded-xl font-bold pt-4 w-full 
            hover:from-indigo-500 hover:to-purple-800 transition">
            Login
          </a> -->
        </div>
        <div class="buttondiv" style="display: flex; justify-content: center;">
                <button class="btn btn-secondary inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
            text-center text-xl px-[20px] py-[10px] rounded-xl font-bold 
            hover:from-indigo-500 hover:to-purple-800 transition" type="submit" name="login_user">Login</button>
        </div>        
        <a href="signin.php" class="text-white block text-center pt-4">Or <b class="text-lg transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Sign Up</b></a>
      </form> 
    </div>
  
</div>
  
</body>
</html>
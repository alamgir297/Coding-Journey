<?php include('server.php') ?>
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Sign In</title>
  <script src="https://cdn.tailwindcss.com"></script>
  <link rel="stylesheet" href="style/style.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
</head>
<body class="h-screen bg-gradient-to-r from-purple-800 to-indigo-200">
  
    <div class="Signinarea bg-white/20 w-[300px] sm:w-[450px] h-[700px] shadow-xl rounded-3xl flex flex-col items-center justify-center">

      <div class="title bg-gradient-to-r from-purple-800 to-indigo-600 text-transparent bg-clip-text text-bold text-5xl pb-6 font-[700] ">Sign Up</div>

      <form action="signin.php" class="w-full" method="post">
        
        <?php include('errors.php') ?>

        <div class="relative pl-14 pr-14">

            <label for="fname" class="absolute">
                <i class="fa-solid pt-4 pb-4 text-lg fa-user text-white"></i>
            </label>
            <input type="text" name="fname" required placeholder="Full Name" 
            class="bg-transparent placeholder:text-white border-b-2 
            pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">

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

            <label for="1stqus" class="absolute">
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
            pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">          
        </div>

        <div class="buttondiv" style="display: flex; justify-content: center;">
                <button class="btn btn-secondary inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
            text-center text-xl px-[20px] py-[10px] rounded-xl font-bold 
            hover:from-indigo-500 hover:to-purple-800 transition mt-4" type="submit" name="reg_user">Sign up</button>
        </div>
        <div class="text-white block text-center pt-4">Have an account?
            <a href="login.php" class="font-bold text-lg transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Log In</a>
        </div>

      </form> 
    </div>
  
</div>
  
</body>
</html>
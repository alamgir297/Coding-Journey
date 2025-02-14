<?php include('server.php') ?>
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Password recovery</title>
  <script src="https://cdn.tailwindcss.com"></script>
  <link rel="stylesheet" href="style/style.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
</head>
<body class="h-screen bg-gradient-to-r from-purple-800 to-indigo-200">
  
    <div class="Signinarea bg-white/20 w-[300px] sm:w-[450px] h-[500px] shadow-xl rounded-3xl flex flex-col items-center justify-center">
        <div class="wrongvalue bg-black/50 text-5xl text-red-500 z-10 px-10 py-32 absolute top-0 hidden">
            Your security question answer is wrong!
        </div>

        <div class="rightvalue bg-black/50 text-5xl text-green-500 z-10 px-10 py-32 absolute top-0 hidden">
            Your security question answer is right...
        </div>

      <div class="title bg-gradient-to-r from-purple-800 to-indigo-600 text-transparent bg-clip-text text-bold text-5xl pb-6 font-[700] ">Forgot Password</div>

      <form action="forgetpassword.php" class="w-full" method="post">
        <?php include('errors.php') ?>
        <div class="relative pl-14 pr-14">
            
            <label for="email" class="absolute">
                <i class="fa-solid pt-4 pb-4 text-lg fa-envelope text-white"></i>
            </label>
            <input type="text" name="username" placeholder="Username" required 
            class="bg-transparent placeholder:text-white border-b-2
            pt-4 pb-4 text-xl ps-14 w-full text-white border-white duration-[1000s] !outline-none"><br>
            
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
            hover:from-indigo-500 hover:to-purple-800 transition mt-4" type="submit" name="forgot">Retrive Password</button>
        </div>
        <a href="login.php" class="text-white block text-center pt-4">Or <b class="text-lg transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Go back to login</b></a>

      </form> 
    </div>
  
</div>
  
</body>
</html>
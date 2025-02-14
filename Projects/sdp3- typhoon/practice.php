<?php include('server.php') ?>

<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Practice</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <link rel="stylesheet" href="style/practicestyle.css">
    <link rel="stylesheet" href="style/style.css">
</head>
<body class=" pt-20 pb-20 bg-gradient-to-r from-purple-800 to-indigo-200 flex flex-col items-center justify-center">
    <div class="title text-bold text-center text-white text-6xl pb-6 font-[700]">Practice</div>
    

    <div id="custom-select" class="mb-2">
        <select id="difficulty-select" class="py-2 px-5 rounded-xl">
            <option >Select your difficulty level</option>
            <option value="5">1</option>
            <option value="10">2</option>
            <option value="15">3</option>
            <option value="20">4</option>
            <option value="26">5</option>
        </select>
      </div>
    

    <div class="allkeys flex items-center px-4 gap-7 py-4 px-2 mb-2 bg-white/10">
        <div class="text-2xl text-white">All Keys:</div>
        <div class="alphabet flex items-center justify-center gap-2">
        </div>
    </div>

    <div class="allkeys flex items-center px-4 gap-4 py-4 px-2 mb-2 bg-white/10">
        <div class="text-2xl text-white">Active Keys:</div>
        <div class="activealphabet flex items-center justify-center gap-2">
        </div>
    </div>

    <div class="result rounded-xl w-[85%] md:w-[60%] py-8 hidden bg-black/90 absolute z-10 fadeupAnimation">
        <div class="text-3xl sm:text-6xl font-bold text-center pb-8 text-white">Your Result</div>
        <div class="h-[2px] w-full bg-white"></div>

        <li class="resultmistake flex py-4 text-2xl sm:text-3xl text-white gap-2 items-center justify-center">
            <p>Mistakes:</p>
            <span>0</span>
        </li>
        <li class="resultaccuracy flex py-4 text-2xl sm:text-3xl text-white gap-2 items-center justify-center">
            <p>Accuracy:</p>
            <div class="acc"><span>0</span>%</div>        
        </li>
        <li class="resultcrr flex py-4 text-2xl sm:text-3xl text-white gap-2 items-center justify-center">
            <p>Correct_Char:</p>
            <span>0</span>
        </li>
        <li class="resultcpm flex py-4 text-2xl sm:text-3xl text-white gap-2 items-center justify-center">
            <p>CPM:</p>
            <span>0</span>
        </li>
        <li class="resultwpm flex py-4 text-2xl sm:text-3xl text-white gap-2 items-center justify-center">
            <p>WPM:</p>
            <span>0</span>
        </li>

        <button class="w-12 h-12 absolute top-[0] right-[0] resultbutton group hover:bg-red-900 transition-all rounded-xl">
            <svg xmlns="http://www.w3.org/2000/svg" class="h-full w-full" viewBox="0 0 16 16" fill="none">
                <path d="M14 1C14.5523 1 15 1.44772 15 2V14C15 14.5523 14.5523 15 14 15H2C1.44772 15 1 14.5523 1 14V2C1 1.44772 1.44772 1 2 1H14ZM2 0C0.895431 0 0 0.895431 0 2V14C0 15.1046 0.895431 16 2 16H14C15.1046 16 16 15.1046 16 14V2C16 0.895431 15.1046 0 14 0H2Z" fill="#FF0000"/>
                <path d="M4.64645 4.64645C4.84171 4.45118 5.15829 4.45118 5.35355 4.64645L8 7.29289L10.6464 4.64645C10.8417 4.45118 11.1583 4.45118 11.3536 4.64645C11.5488 4.84171 11.5488 5.15829 11.3536 5.35355L8.70711 8L11.3536 10.6464C11.5488 10.8417 11.5488 11.1583 11.3536 11.3536C11.1583 11.5488 10.8417 11.5488 10.6464 11.3536L8 8.70711L5.35355 11.3536C5.15829 11.5488 4.84171 11.5488 4.64645 11.3536C4.45118 11.1583 4.45118 10.8417 4.64645 10.6464L7.29289 8L4.64645 5.35355C4.45118 5.15829 4.45118 4.84171 4.64645 4.64645Z" fill="#FF0000"/>
            </svg>
        </button>
    </div>

    <div class="wrapper bg-white md:w-[70%] p-[30px] rounded-xl">
        <input type="text" class="input-field absolute z-[-5]">
        <div class="content-box border border-gray-500 rounded-lg p-[10px]">
            <div class="typing-test h-[80%] overflow-auto scrollbar-hide">
                <p class="text-2xl break-word"></p>
            </div>
            <div class="content xl:flex xl:items-center xl:justify-between gap-2 border-t border-black py-2 mt-10">
                <ul class="result-details gap-2 grid sm:grid-cols-3 md:grid-cols-3 lg:grid-cols-6 xl:grid-cols-6 xl:w-[80%]">
                    <li class="time flex gap-2 items-center justify-center">
                        <p>Time Left:</p>
                        <span><b>60s</b></span>
                    </li>
                    <li class="mistake flex gap-2 items-center justify-center">
                        <p>Mistakes:</p>
                        <span>0</span>
                    </li>
                    <li class="accuracy flex gap-2 items-center justify-center">
                        <p>Accuracy:</p>
                        <div class="acc"><span>0</span>%</div>
                        
                    </li>
                    <li class="crr flex gap-2 items-center justify-center">
                        <p>Correct_Char:</p>
                        <span>0</span>
                    </li>
                    <li class="cpm flex gap-2 items-center justify-center">
                        <p>CPM:</p>
                        <span>0</span>
                    </li>
                    <li class="wpm flex gap-2 items-center justify-center">
                        <p>WPM:</p>
                        <span>0</span>
                    </li>
                </ul>
                <div class="buttonarea flex items-center justify-center gap-2 xl:pt-0 pt-5">
                    <button class="tryAgainBtn text-white bg-gradient-to-r from-purple-800 to-indigo-500 
                        text-center text-xl px-4 py-2 rounded-lg hover:from-indigo-500 hover:to-purple-800 transition">
                        Try Again
                    </button>
                    <a href="home.php" class=" text-white bg-gradient-to-r from-purple-800 to-indigo-500 
                        text-center text-xl px-4 py-2 rounded-lg hover:from-indigo-500 hover:to-purple-800 transition">
                        Exit
                    </a>
                </div>
            </div>
        </div>
    </div>

    <script src="script/practicescriptparagraph.js"></script>
    <script src="script/practicemain.js"></script>
    
</body>
</html>
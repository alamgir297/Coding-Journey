<?php include('server.php') ?>
<!doctype html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./style/main.css">
    <link rel="stylesheet" href="./style/animation.css">
    <script src="https://cdn.tailwindcss.com"></script>
    <title>Smart Lib</title>
    
</head>
<body class="bg-[#1c1c38] container mx-auto">
    
    <div id="animatedArea" class="hidden">
        <div class="h-screen flex flex-col py-[50px] gap-[150px]">
            <h1 class="text-[#a5abb1] text-7xl text-center shadow-md rounded-xl shadow-gray-700 pb-10">Smart Lib</h1>
            <div class=" grid grid-cols-2 gap-x-10">
                <!-- admin login -->
                <button onclick="location.href='admin-login.php'" class="bg-[#101329] shadow-md shadow-gray-700 w-[50%] ml-auto hover:scale-105 hover:bg-[#151c44] transition-all duration-500 rounded-xl px-10 py-12 text-[#a5abb1] font-bold text-2xl flex flex-col items-center justify-center gap-5" id="admin">
                    <!-- user image -->
                    <span>
                        <svg xmlns="http://www.w3.org/2000/svg" x="0px" y="0px"
                        width="96" height="96"
                        viewBox="0 0 192 192"
                        style=" fill:#000000;"><g fill="none" fill-rule="nonzero" stroke="none" stroke-width="1" stroke-linecap="butt" stroke-linejoin="miter" stroke-miterlimit="10" stroke-dasharray="" stroke-dashoffset="0" font-family="none" font-weight="none" font-size="none" text-anchor="none" style="mix-blend-mode: normal"><path d="M0,192v-192h192v192z" fill="none"></path><path d="M96,192c-53.01934,0 -96,-42.98066 -96,-96v0c0,-53.01934 42.98066,-96 96,-96v0c53.01934,0 96,42.98066 96,96v0c0,53.01934 -42.98066,96 -96,96z" fill="#cccccc"></path><g fill="#666666"><g id="surface1"><path d="M96,40.32c-15.38812,0 -27.84,12.45188 -27.84,27.84c0,15.38813 12.45188,27.84 27.84,27.84c15.38813,0 27.84,-12.45187 27.84,-27.84c0,-15.38812 -12.45187,-27.84 -27.84,-27.84zM75.3375,105.7875c-26.29031,7.96594 -35.0175,29.58 -35.0175,29.58v16.3125h111.36v-16.3125c0,0 -8.72719,-21.61406 -35.0175,-29.58c-1.44094,10.14094 -10.14094,18.0525 -20.6625,18.0525c-10.52156,0 -19.22156,-7.91156 -20.6625,-18.0525z"></path></g></g></g></svg>
                    </span>
            
                    <!-- button login -->
                    <span>Admin Login </span>
            
                </button>
            
                <!-- user login -->
                <button onclick="location.href='user-login.php'" class="bg-[#101329] shadow-md shadow-gray-700 w-[50%] hover:scale-105 hover:bg-[#151c44] transition-all duration-500 rounded-xl px-10 py-12 text-[#a5abb1] font-bold text-2xl flex flex-col items-center justify-center gap-5" id="admin">
                    <!-- user image -->
                    <span>
                        <svg xmlns="http://www.w3.org/2000/svg" x="0px" y="0px"
                        width="96" height="96"
                        viewBox="0 0 192 192"
                        style=" fill:#000000;"><g fill="none" fill-rule="nonzero" stroke="none" stroke-width="1" stroke-linecap="butt" stroke-linejoin="miter" stroke-miterlimit="10" stroke-dasharray="" stroke-dashoffset="0" font-family="none" font-weight="none" font-size="none" text-anchor="none" style="mix-blend-mode: normal"><path d="M0,192v-192h192v192z" fill="none"></path><path d="M96,192c-53.01934,0 -96,-42.98066 -96,-96v0c0,-53.01934 42.98066,-96 96,-96v0c53.01934,0 96,42.98066 96,96v0c0,53.01934 -42.98066,96 -96,96z" fill="#cccccc"></path><g fill="#666666"><g id="surface1"><path d="M96,40.32c-15.38812,0 -27.84,12.45188 -27.84,27.84c0,15.38813 12.45188,27.84 27.84,27.84c15.38813,0 27.84,-12.45187 27.84,-27.84c0,-15.38812 -12.45187,-27.84 -27.84,-27.84zM75.3375,105.7875c-26.29031,7.96594 -35.0175,29.58 -35.0175,29.58v16.3125h111.36v-16.3125c0,0 -8.72719,-21.61406 -35.0175,-29.58c-1.44094,10.14094 -10.14094,18.0525 -20.6625,18.0525c-10.52156,0 -19.22156,-7.91156 -20.6625,-18.0525z"></path></g></g></g></svg>
                    </span>
            
                    <!-- button login -->
                    <span>User Login</span>
            
                </button>
            </div>
        </div>
    </div>

    <script src="/script/animation.js"></script>
    <script src="/script/script.js"></script>
</body>
</html>
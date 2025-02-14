<?php include('server.php') ?>
<!doctype html>
<html>

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./style/main.css">
    <link rel="stylesheet" href="./style/animation.css">
    <script src="https://cdn.tailwindcss.com"></script>
    <title>Add Book</title>

</head>

<body class="bg-[#1c1c38]">

    <div id="animatedArea" class="hidden">
        <div class=" h-screen flex flex-col py-[50px] gap-[50px] container mx-auto">
            <h1 class="text-[#a5abb1] text-7xl text-center shadow-md rounded-xl shadow-gray-700 pb-10">Smart Lib</h1>

            <div
                class="form bg-[#101329] w-[50%] mx-auto shadow-md shadow-gray-700 rounded-xl p-10 text-[#a5abb1] text-lg">
                <h3 class="text-center text-2xl border-t-2 border-b-2 border-gray-400 py-4">Add Book</h3>

                <!-- Add Book  -->
                <form action="add-books.php"  method="post">
        
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
                    <input type="text" name="book_name" placeholder="Book Name" required
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">
                
                    <label for="email" class="absolute">
                        <i class="fa-solid pt-4 pb-4 text-lg fa-envelope text-white"></i>
                    </label>
                    <input type="text" name="dept_name" placeholder="Department name" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">
                   
                    <input type="text" name="writer_name" placeholder="Writer name" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">
                   
                    <input type="text" name="total" placeholder="Quantity" 
                    class="bg-transparent placeholder:text-white border-b-2 
                    pt-4 pb-4 text-xl ps-14 duration-[1000s] w-full border-white text-white !outline-none">

                    <div class="w-full my-10">
                        <div class="pt-4 pb-8 text-xl text-white text-center">Book Cover Photo</div>
                        <label for="input-file" id="drop-area" class="w-[300px]
                            h-[200px] border-white bg-slate-600">
                            <input type="file" id="input-file" class="text-white bg-gray-900 border-white border" hidden>
                            <div id="img-view" class="w-[200px] relative mx-auto h-[300px] text-center flex items-center justify-center">
                                <img src="" id="image" class="w-[200px] h-[300px] absolute top-0 left-0 object-cover">
                                <div id="text" class="text-white text-sm">
                                    Upload any picture from the Desktop<br>
                                    Or drag and drop any picture
                                </div>
                            </div>
    
                        </label>
                    </div>

                </div>

                <div class="buttondiv flex items-center justify-center gap-4">
                        <button class="btn btn-secondary inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
                        text-center text-xl px-[20px] py-[10px] rounded-xl font-bold 
                        hover:from-indigo-500 hover:to-purple-800 transition mt-4" type="submit" name="add_book">
                            Add book
                        </button>
                        <button id="clear_button" class="btn btn-secondary inline-block text-white bg-gradient-to-r from-purple-800 to-indigo-500 
                        text-center text-xl px-[20px] py-[10px] rounded-xl font-bold 
                        hover:from-indigo-500 hover:to-purple-800 transition mt-4" type="submit" name="add_book">
                            Clear
                        </button>
                </div>
                <div class="text-white block text-center pt-4">
                    <a href="dashboard.php" class="font-bold text-lg transition duration-[0.4s] text-white hover:bg-gradient-to-r hover:from-purple-800 hover:to-indigo-600 hover:text-transparent bg-clip-text">Back</a>
                </div>

                </form>

            </div>

        </div>

    </div>
    <script>
        let dropArea = document.getElementById("drop-area");
        let inputFile = document.getElementById("input-file");
        let imageView = document.getElementById("img-view");
        let image = document.getElementById("image");
        let text = document.getElementById("text");
        let clearButton = document.getElementById("clear_button");

        inputFile.addEventListener("change", uploadImage);

        function textStyle() {
            text.classList.toggle("hidden");
        }

        let imgLink;

        function uploadImage() {
            imgLink = URL.createObjectURL(inputFile.files[0]);
            image.src = imgLink;
            textStyle();
            // text.innerHTML = "";
            console.log(imgLink);
            // imageView.style.backgroundImage = `url(${imgLink})`;
        }

        clearButton.addEventListener("click",function(e){
            if(image.src == imgLink){
                image.src = '';
                textStyle();
            }
            // console.log(imgLink);
        });

        dropArea.addEventListener("dragover",function(e){
            e.preventDefault();
        });

        dropArea.addEventListener("drop",function(e){
            e.preventDefault();
            inputFile.files = e.dataTransfer.files;
            console.log(inputFile.files);
            uploadImage();
        });


    </script>
    <!-- <script src="/script/dragAndDrop.js"></script> -->
    <script src="/script/animation.js"></script>
    <script src="/script/script.js"></script>
</body>

</html>
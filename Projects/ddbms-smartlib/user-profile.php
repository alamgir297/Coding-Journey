<?php include('server.php') ?>
<!doctype html>
<html>

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./style/main.css">
    <link rel="stylesheet" href="./style/animation.css">
    <script src="https://cdn.tailwindcss.com"></script>
    <title>User Profile</title>

</head>

<body class="bg-[#1c1c38]">

    <div id="animatedArea" class="hidden relative h-screen overflow-auto">

        <nav class="bg-[#101329] w-full sticky top-0 left-0 z-20">
            <ul class="container mx-auto py-8 flex items-start gap-10 justify-between">
                <li>
                    <a href="#" class="logo px-4 text-2xl text-[#7367f0]">Smart Lib</a>
                </li>
                <li class="flex items-center justify-center gap-6">
                    <button onclick="location.href='user-server-list.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Server List
                    </button>
                    <button onclick="location.href='user-department-list.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Department List
                    </button>
                    <button onclick="location.href='user-book-list.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Book List
                    </button>
                    <!-- profile area start -->
                    <div class="relative border-b-[#7367f0] border-b-2 pb-1">

                        <div class="flex items-center justify-center gap-[2px] bg-[#101329] relative">

                            <div class="w-[25px] h-[25px] rounded-full overflow-hidden">
                                <svg xmlns="http://www.w3.org/2000/svg" x="0px" y="0px" width="100%" height="100%"
                                    viewBox="0 0 192 192" style=" fill:#000000;">
                                    <g fill="none" fill-rule="nonzero" stroke="none" stroke-width="1"
                                        stroke-linecap="butt" stroke-linejoin="miter" stroke-miterlimit="10"
                                        stroke-dasharray="" stroke-dashoffset="0" font-family="none" font-weight="none"
                                        font-size="none" text-anchor="none" style="mix-blend-mode: normal">
                                        <path d="M0,192v-192h192v192z" fill="none"></path>
                                        <path
                                            d="M96,192c-53.01934,0 -96,-42.98066 -96,-96v0c0,-53.01934 42.98066,-96 96,-96v0c53.01934,0 96,42.98066 96,96v0c0,53.01934 -42.98066,96 -96,96z"
                                            fill="#cccccc"></path>
                                        <g fill="#666666">
                                            <g id="surface1">
                                                <path
                                                    d="M96,40.32c-15.38812,0 -27.84,12.45188 -27.84,27.84c0,15.38813 12.45188,27.84 27.84,27.84c15.38813,0 27.84,-12.45187 27.84,-27.84c0,-15.38812 -12.45187,-27.84 -27.84,-27.84zM75.3375,105.7875c-26.29031,7.96594 -35.0175,29.58 -35.0175,29.58v16.3125h111.36v-16.3125c0,0 -8.72719,-21.61406 -35.0175,-29.58c-1.44094,10.14094 -10.14094,18.0525 -20.6625,18.0525c-10.52156,0 -19.22156,-7.91156 -20.6625,-18.0525z">
                                                </path>
                                            </g>
                                        </g>
                                    </g>
                                </svg>
                            </div>

                            <div class="name px-3 text-sm text-[#7367f0] py-1">
                                <?php echo $_SESSION['username']; ?>
                            </div>

                            <button class="w-[16px] h-[16px] collapse-button transition-all duration-500">
                                <svg xmlns="http://www.w3.org/2000/svg" width="100%" height="100%" viewBox="0 0 16 16"
                                    fill="none">
                                    <path fill-rule="evenodd" clip-rule="evenodd"
                                        d="M1.64645 4.64645C1.84171 4.45118 2.15829 4.45118 2.35355 4.64645L8 10.2929L13.6464 4.64645C13.8417 4.45118 14.1583 4.45118 14.3536 4.64645C14.5488 4.84171 14.5488 5.15829 14.3536 5.35355L8.35355 11.3536C8.15829 11.5488 7.84171 11.5488 7.64645 11.3536L1.64645 5.35355C1.45118 5.15829 1.45118 4.84171 1.64645 4.64645Z"
                                        fill="#7367f0" />
                                </svg>
                            </button>
                        </div>

                        <div
                            class="collapse-area absolute left-0 max-h-0 top-[120%] overflow-hidden transition-all duration-500 bg-black w-full divide-y-2 divide-gray-500 flex flex-col items-start justify-start">
                            <button onclick="location.href='user-profile.php'"
                                class="px-3 text-start w-full text-sm text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                                Profile
                            </button>
                            <button onclick="location.href='user-login.php'"
                                class="px-3 text-start w-full text-sm text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                                Logout
                            </button>
                        </div>
                    </div>
                </li>
            </ul>
        </nav>

        <!-- collected-books-area popup start -->

        <div
            class="transition-all duration-500 collected-books-popup opacity-0 -z-10 w-[90%] -translate-x-[50%] -translate-y-[50%] absolute top-[50%] left-[50%] h-[90%] overflow-auto backdrop-blur-xl bg-green/70">

            <div class="relative">
                <button class="cross-button px-2 py-2 group absolute top-0 right-0">
                    <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" viewBox="0 0 8 8" fill="none">
                        <path
                            d="M0.646447 0.646447C0.841709 0.451184 1.15829 0.451184 1.35355 0.646447L4 3.29289L6.64645 0.646447C6.84171 0.451184 7.15829 0.451184 7.35355 0.646447C7.54882 0.841709 7.54882 1.15829 7.35355 1.35355L4.70711 4L7.35355 6.64645C7.54882 6.84171 7.54882 7.15829 7.35355 7.35355C7.15829 7.54882 6.84171 7.54882 6.64645 7.35355L4 4.70711L1.35355 7.35355C1.15829 7.54882 0.841709 7.54882 0.646447 7.35355C0.451184 7.15829 0.451184 6.84171 0.646447 6.64645L3.29289 4L0.646447 1.35355C0.451184 1.15829 0.451184 0.841709 0.646447 0.646447Z"
                            fill="red" class="group-hover:scale-110 transition-all duration-[0.4s]" />
                    </svg>
                </button>
                <div class="text-center text-4xl pt-10 text-[#a5abb1]">Collected Books List</div>
                <table class="w-full my-20 container mx-auto">
                    <tr>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 text-[#a5abb1]">Book Id</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 text-[#a5abb1]">Book Name</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 text-[#a5abb1]">Department</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 text-[#a5abb1]">Writer name</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 text-[#a5abb1]">Collected Date</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 text-[#a5abb1]">Return Date</td>
                        <!-- <td class="border border-[#a5abb1] text-center px-2 py-1 text-[#a5abb1]">Status</td> -->
                    </tr>
                    <?php
                        // Fetch data from the database
                        $id=$_SESSION['id'];
                        $query = " SELECT * FROM issued_books where user_id='$id' ";
                        $result = mysqli_query($connect, $query);

                        // Check if there are any results
                        if (mysqli_num_rows($result) > 0) {
    
                            // Loop through the results and display each row in the table
                            while ($row = mysqli_fetch_assoc($result)) {
                                echo "<tr>";
                                echo "<td class='border border-[#a5abb1] text-center px-2 py-1'>" . $row['book_id'] . "</td>";
                                echo "<td class='border border-[#a5abb1] text-center px-2 py-1'>" . $row['book_name'] . "</td>";
                                echo "<td class='border border-[#a5abb1] text-center px-2 py-1'>" . $row['dept_name'] . "</td>";
                                echo "<td class='border border-[#a5abb1] text-center px-2 py-1'>" . $row['writer_name'] . "</td>";
                                echo "<td class='border border-[#a5abb1] text-center px-2 py-1'>" . $row['date_issued'] . "</td>";
                                echo "<td class='border border-[#a5abb1] text-center px-2 py-1'>" . $row['date_return'] . "</td>";
                                echo "</tr>";
                            }
                        } else {
                            // No results found
                            echo "<tr><td colspan='6' class='border border-[#a5abb1] text-center px-2 py-1'>No user data found.</td></tr>";
                        }
                    ?>


                </table>
            </div>
        </div>

        <!-- collected-books-area popup end -->
        <div class="container mx-auto flex items-center justify-center">

            <div class="bg-[#101329] my-16 flex items-start justify-start gap-5 px-10 py-16 relative">

                <!-- collected-books-area button start     -->
                <button
                    class="collected-books-button absolute top-0 right-0 bg-[#101329] border hover:scale-105 hover:bg-[#151c44] transition-all duration-500 rounded-lg px-5 py-2 text-[#a5abb1] font-bold">
                    Collected Books
                </button>
                <!-- collected-books-area button end     -->


                <div class="w-[150px] h-[150px] rounded-full overflow-hidden">
                    <svg xmlns="http://www.w3.org/2000/svg" x="0px" y="0px" width="100%" height="100%"
                        viewBox="0 0 192 192" style=" fill:#000000;">
                        <g fill="none" fill-rule="nonzero" stroke="none" stroke-width="1" stroke-linecap="butt"
                            stroke-linejoin="miter" stroke-miterlimit="10" stroke-dasharray="" stroke-dashoffset="0"
                            font-family="none" font-weight="none" font-size="none" text-anchor="none"
                            style="mix-blend-mode: normal">
                            <path d="M0,192v-192h192v192z" fill="none"></path>
                            <path
                                d="M96,192c-53.01934,0 -96,-42.98066 -96,-96v0c0,-53.01934 42.98066,-96 96,-96v0c53.01934,0 96,42.98066 96,96v0c0,53.01934 -42.98066,96 -96,96z"
                                fill="#cccccc"></path>
                            <g fill="#666666">
                                <g id="surface1">
                                    <path
                                        d="M96,40.32c-15.38812,0 -27.84,12.45188 -27.84,27.84c0,15.38813 12.45188,27.84 27.84,27.84c15.38813,0 27.84,-12.45187 27.84,-27.84c0,-15.38812 -12.45187,-27.84 -27.84,-27.84zM75.3375,105.7875c-26.29031,7.96594 -35.0175,29.58 -35.0175,29.58v16.3125h111.36v-16.3125c0,0 -8.72719,-21.61406 -35.0175,-29.58c-1.44094,10.14094 -10.14094,18.0525 -20.6625,18.0525c-10.52156,0 -19.22156,-7.91156 -20.6625,-18.0525z">
                                    </path>
                                </g>
                            </g>
                        </g>
                    </svg>
                </div>

                <div class="text-area space-y-2 divide-y-2 divide-[#a5abb1]">
                    <?php
                        $query = "SELECT * FROM user WHERE username = '{$_SESSION['username']}'";
                        $result = mysqli_query($connect, $query);

                        if ($result) {
                            // Fetch the row as an associative array
                            $row = mysqli_fetch_assoc($result);

                            // Assign values to global variables
                            $_SESSION['id'] = $row['user_id'];
                            $_SESSION['server'] = $row['server'];
                            $_SESSION['email'] = $row['email'];
                            $_SESSION['dept'] = $row['dept_name'];
                            $_SESSION['bday'] = $row['birthdate'];


                            // Free result set
                            mysqli_free_result($result);
                            } else {
                                // Handle query error
                                echo "Error: " . mysqli_error($connect);
                            }
                            // Now you can use $id, $name, $server, and $email globally throughout your script
                        ?>
                    <div class="id text-[#a5abb1] text-2xl flex items-center justify-start gap-5 px-2 py-2">
                        <div class="w-[150px]">
                            ID:
                        </div>
                        <div>
                            <?php echo $_SESSION['id']; ?>
                        </div>
                    </div>
                    <div class="name text-[#a5abb1] text-2xl flex items-center justify-start gap-5 px-2 py-2">
                        <div class="w-[150px]">
                            Name:
                        </div>
                        <div>
                            <?php echo $_SESSION['username']; ?> 
                        </div>
                    </div>

                    <div class="area text-[#a5abb1] text-2xl flex items-center justify-start gap-5 px-2 py-2">
                        <div class="w-[150px]">
                            Server:
                        </div>
                        <div>
                          <?php echo $_SESSION['server']; ?>
                        </div>
                    </div>

                    <div class="email text-[#a5abb1] text-2xl flex items-center justify-start gap-5 px-2 py-2">
                        <div class="w-[150px]">
                            Email:
                        </div>
                        <div>
                            <?php echo $_SESSION['email']; ?>
                        </div>
                    </div>

                    <div class="department text-[#a5abb1] text-2xl flex items-center justify-start gap-5 px-2 py-2">
                        <div class="w-[150px]">
                            Department:
                        </div>
                        <div>
                            <?php echo "CSE"; ?>
                        </div>
                    </div>

                    <div class="birthday text-[#a5abb1] text-2xl flex items-center justify-start gap-5 px-2 py-2">
                        <div class="w-[150px]">
                            Birthday:
                        </div>
                        <div>
                            <?php echo $_SESSION['bday']; ?>
                        </div>
                    </div>

                </div>

            </div>
        </div>
    </div>
    <script>
            // Collected Books Popup

        document.querySelector(".collected-books-button").addEventListener("click", function(){
            showAndHide();
        });

        document.querySelector(".cross-button").addEventListener("click", function(){
            showAndHide();
        });

        var collectedBooksPopup = document.querySelector(".collected-books-popup");

        
        function showAndHide(){
            collectedBooksPopup.classList.toggle('opacity-0');
            collectedBooksPopup.classList.toggle('-z-10');
            collectedBooksPopup.classList.toggle('z-30');
        }


        // Add Delete books popup

        document.querySelector(".add-delete-button").addEventListener("click", function(){
            addDeleteShowAndHide();
        });

        document.querySelector(".add-delete-cross-button").addEventListener("click", function(){
            addDeleteShowAndHide();
        });

        var addDeletePopup = document.querySelector(".add-delete-popup");

        
        function addDeleteShowAndHide(){
            addDeletePopup.classList.toggle('opacity-0');
            addDeletePopup.classList.toggle('-z-10');
            addDeletePopup.classList.toggle('z-30');
        }


    </script>
    <script src="/script/animation.js"></script>
    <script src="/script/script.js"></script>
</body>

</html>
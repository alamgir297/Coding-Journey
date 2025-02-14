<?php include('server.php') ?>
<!doctype html>
<html>

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./style/main.css">
    <link rel="stylesheet" href="./style/animation.css">
    <script src="https://cdn.tailwindcss.com"></script>
    <title>Book List</title>

</head>

<body class="bg-[#1c1c38] pb-12">

    <div id="animatedArea" class="hidden h-screen relative">
        <nav class="bg-[#101329] w-full sticky top-0 left-0">
            <ul class="container mx-auto py-8 flex items-start gap-10 justify-between">
                <li>
                    <a href="#" class="logo px-4 text-2xl text-[#7367f0]">Smart Lib</a>
                </li>
                <li class="flex items-center justify-center gap-6">
                    <button onclick="location.href='dashboard.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Dashboard
                    </button>
                    <button onclick="location.href='add-books.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Add Books
                    </button>
                    <button onclick="location.href='user-details.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Users Details
                    </button>
                    <button onclick="location.href='server-list.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Server List
                    </button>
                    <button onclick="location.href='department-list.php'"
                        class="px-3 text-lg text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                        Department List
                    </button>
                    <button onclick="location.href='book-list.php'"
                        class="px-3 text-lg text-[#7367f0] border-b-[#7367f0] border-b-2 py-1">
                        Book List
                    </button>

                    <!-- profile area start -->
                    <div class="relative">

                        <div class="flex items-center justify-center gap-[2px] bg-[#101329] relative">

                            <div class="w-[40px] h-[40px] rounded-full overflow-hidden">
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

                            <div class="name px-3 text-sm text-[#a5abb1] py-1">
                                <?php
                                    echo $_SESSION['username'];
                                ?>
                            </div>

                            <button class="w-[16px] h-[16px] collapse-button transition-all duration-500">
                                <svg xmlns="http://www.w3.org/2000/svg" width="100%" height="100%" viewBox="0 0 16 16"
                                    fill="none">
                                    <path fill-rule="evenodd" clip-rule="evenodd"
                                        d="M1.64645 4.64645C1.84171 4.45118 2.15829 4.45118 2.35355 4.64645L8 10.2929L13.6464 4.64645C13.8417 4.45118 14.1583 4.45118 14.3536 4.64645C14.5488 4.84171 14.5488 5.15829 14.3536 5.35355L8.35355 11.3536C8.15829 11.5488 7.84171 11.5488 7.64645 11.3536L1.64645 5.35355C1.45118 5.15829 1.45118 4.84171 1.64645 4.64645Z"
                                        fill="#A5ABB1" />
                                </svg>
                            </button>
                        </div>

                        <div
                            class="collapse-area absolute left-0 max-h-0 top-[120%] overflow-hidden transition-all duration-500 bg-black w-full divide-y-2 divide-gray-500 flex flex-col items-start justify-start">
                            <button onclick="location.href='admin-profile.php'"
                                class="px-3 text-start w-full text-sm text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                                Profile
                            </button>
                            <button onclick="location.href='admin-login.php'"
                                class="px-3 text-start w-full text-sm text-[#a5abb1] hover:text-[#7367f0] border-b-transparent transition-all duration-500 hover:border-b-[#7367f0] border-b-2 py-1">
                                Logout
                            </button>
                        </div>
                    </div>

                </li>
            </ul>
        </nav>

        <div class="container mx-auto mt-10">

            <!-- Book list start-->

            <div onclick="location.href='book-list.php'"
                class="bg-[#101329] cursor-pointer border border-[#a5abb1] text-[#a5abb1] px-5 py-2">
                <h3 class="text-lg">Book List</h3>
                <table class="w-full">
                    <tr>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 w-[10%]">Id</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 w-[30%]">Book Name</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 w-[20%]">Department Name</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 w-[20%]">Writer Name</td>
                        <td class="border border-[#a5abb1] text-center px-2 py-1 w-[20%]">Total Books</td>
                    </tr>
                    <?php
                        // Fetch data from the database
                        $query = "SELECT * FROM books";
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
                                echo "<td class='border border-[#a5abb1] text-center px-2 py-1'>" . $row['quantity'] . "</td>";
                                echo "</tr>";
                            }
                        } else {
                            // No results found
                            echo "<tr><td colspan='6' class='border border-[#a5abb1] text-center px-2 py-1'>No user data found.</td></tr>";
                        }
                    ?>

                </table>
            </div>

            <!-- Book list end-->
        </div>
    </div>

    <script src="/script/animation.js"></script>
    <script src="/script/script.js"></script>
</body>

</html>
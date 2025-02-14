<?php include('server.php') ?>
<!-- <?php -->
        // Receive JSON data from the request body
    $data = json_decode(file_get_contents("php://input"));

    // Access individual variables
    $mistake = $data->mistake;
    $wordCount = $data->wordCount;
    $maxTime = $data->maxTime;
    if($maxTime){
        
    }
    $insertQuery= " INSERT INTO practice_info(mistakes, wordCount, totalTime)
                    VALUES('$mistake', '$wordCount', '$maxTime')";
    mysqli_query($connect, $insertQuery);
    // Send a response back to the client-side JavaScript (optional)
    echo "updated successfully";
    
// ?>
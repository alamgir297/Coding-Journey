
    // Get the element
    var collapseButton = document.querySelector(".collapse-button");
    var collapseArea = document.querySelector(".collapse-area");

    // click over the collapse button
    collapseButton.addEventListener("click",function(){
        collapseButton.classList.toggle('rotate-180');
        collapseArea.classList.toggle('max-h-0');
        collapseArea.classList.toggle('max-h-[200px]');
    });

    // click over any other area
    document.addEventListener("click", function(e){
        if((!collapseButton.contains(e.target)) && (!collapseArea.contains(e.target)) && (collapseArea.classList.contains("max-h-[200px]")) ) {
            collapseButton.classList.toggle('rotate-180');
            collapseArea.classList.toggle('max-h-0');
            collapseArea.classList.toggle('max-h-[200px]');
        }
    })

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





    const alphabhet = [
        'E','N','I','T','R','L','S','A','U','O',
        'D','Y','C','H','G','M','P','B','K','V','F',
        'X','J','W','Q','Z'
    ]

    
    const maxSpaceDistance = 6, minSpaceDistance = 1;
    let randomstring = '',currentIndex = 0;
    let typingStringsize = 50;
    let typingStringCapital = '';

    var selectElement = document.getElementById("difficulty-select");


    let activetypingstring = '';
    let activekeyssize = 0;

    const queryStrings = new URLSearchParams(window.location.search);

    
    if(queryStrings.get('activekeyssize')) {
        activekeyssize = queryStrings.get('activekeyssize');
        selectElement.value = activekeyssize;
    }
    else {
        activekeyssize = 5;
    }


    selectElement.addEventListener("change", function() {
        
        const url = window.location.protocol + '//' + window.location.host + window.location.pathname;
        window.location.href = url+'?activekeyssize='+selectElement.value;

        // makehtml();
        // randomparagraph();
    });
 
    function makehtml(){
        randomstring = '';
        activetypingstring = '';

        document.querySelector(".alphabet").innerHTML = '';
        document.querySelector(".activealphabet").innerHTML = '';

        for ( let i = 0 ; i < activekeyssize ; i++){
            activetypingstring+=alphabhet[i];
            let divtag = `<div class="singlecharacter text-xl border px-2 activechar">${alphabhet[i]}<div>`;
            document.querySelector(".alphabet").innerHTML += divtag;
            document.querySelector(".activealphabet").innerHTML += divtag;
        }
    
        for ( let i = activekeyssize ; i < alphabhet.length ; i++ ) {
            let divtag = `<div class="singlecharacter text-xl border px-2 inactivechar">${alphabhet[i]}<div>`;
            document.querySelector(".alphabet").innerHTML += divtag;
        }
    
        for( let i = 0 ; i < typingStringsize ; i++ ){
            typingStringCapital += activetypingstring;
        }
    
        let typingString = typingStringCapital.toLowerCase();
    
    
        while (currentIndex < typingString.length) {
   
            const spaceDistance = Math.floor(Math.random() * (maxSpaceDistance - minSpaceDistance + 1)) + minSpaceDistance;
            const substringLength = Math.min(spaceDistance, typingString.length - currentIndex);
            randomstring += typingString.substr(currentIndex, substringLength);
            currentIndex += substringLength;
        
            if (currentIndex < typingString.length) {
                randomstring += ' ';
                currentIndex++;
            }
        }
    
    }

    makehtml();


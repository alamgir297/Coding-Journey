const typingTest = document.querySelector(".typing-test p"),
inpField = document.querySelector(".wrapper .input-field"),
mistakeTag = document.querySelector(".mistake span"),
resultmistakeTag = document.querySelector(".resultmistake span"),
accuracy = document.querySelector(".accuracy span"),
resultaccuracy = document.querySelector(".resultaccuracy span"),
crrTag = document.querySelector(".crr span"),
resultcrrTag = document.querySelector(".resultcrr span"),
cpmTag = document.querySelector(".cpm span"),
resultcpmTag = document.querySelector(".resultcpm span"),
wpmTag = document.querySelector(".wpm span"),
resultwpmTag = document.querySelector(".resultwpm span"),
timeTag = document.querySelector(".time span b"),
resulttimeTag = document.querySelector(".resulttime span b"),
tryAgainBtn = document.querySelector(".tryAgainBtn");

let charIndex = isTyping = wordCount = mistake = 0, timer,maxTime = 30, timeLeft = maxTime, acc=0;


function randomparagraph(){
    // let randIndex = Math.floor(Math.random() * randomstring.length);

    typingTest.innerHTML = "";
    let bigstring = "";

    randomstring.split("").forEach(span => {
        let spanTag = `<span>${span}</span>`;
        bigstring += spanTag;
    });
    typingTest.innerHTML = bigstring;

    typingTest.querySelectorAll("span")[0].classList.add("active");

    document.addEventListener("keydown" , () => inpField.focus());
    typingTest.addEventListener("click" , () => inpField.focus());
}

function initTyping(){
    const characters = typingTest.querySelectorAll("span");
    let typedChar = inpField.value.split("")[charIndex];

    if(charIndex < characters.length -1 && timeLeft > 0){
        if(!isTyping) {
            timer = setInterval(initTimer,1000);
            isTyping = true;
        }
    
        if(typedChar == null){
            charIndex--;

            if(characters[charIndex].classList.contains("space")){
                wordCount--;
            }
            characters[charIndex].classList.remove("correct","space");
            
            if(characters[charIndex].classList.contains("text-red-500")){
                wordCount--;
                mistake--;
                characters[charIndex].innerText = ' ';
            }
            characters[charIndex].classList.remove("correct","text-red-500");

            if(characters[charIndex].classList.contains("incorrect")){
                mistake--;
            }
            characters[charIndex].classList.remove("correct","incorrect");
        }
        else {
            
            if ((typedChar === ' ') && (characters[charIndex].innerText === typedChar) ) {
                wordCount++;
                characters[charIndex].classList.add("space");
                }

            if ((typedChar !== ' ') && (characters[charIndex].innerText === ' ') ) {
                mistake++;
                wordCount++;
                characters[charIndex].innerText = '-';
                characters[charIndex].classList.add("text-red-500");
                }
    
            else if(characters[charIndex].innerText === typedChar){
                characters[charIndex].classList.add("correct");
            // console.log("correct");
            }
            else {
                mistake++;
                characters[charIndex].classList.add("incorrect");
            }
            
            charIndex++;
        }
    
        characters.forEach(span => span.classList.remove("active"));
        characters[charIndex].classList.add("active");
        mistakeTag.innerText = mistake;
        resultmistakeTag.innerText = mistake;
        accuracy.innerText = Math.round(((charIndex-mistake)*100) / charIndex);
        acc= Math.round(((charIndex-mistake)*100) / charIndex);
        resultaccuracy.innerText = Math.round(((charIndex-mistake)*100) / charIndex);
        crrTag.innerText = charIndex  - mistake;
        resultcrrTag.innerText = charIndex  - mistake;
        cpmTag.innerText = charIndex;
        resultcpmTag.innerText = charIndex;
        wpmTag.innerText = wordCount;
        resultwpmTag.innerText = wordCount;
    
        // console.log(typedChar);

    } 
    else{
        inpField.value= "";
        clearInterval(timer);
    }
}


const result = document.querySelector(".result"),
resultbutton = document.querySelector(".resultbutton");
resultbutton.addEventListener("click",function(){
    result.classList.add("hidden");
});
resultbutton.addEventListener("click", resetgame);

function initTimer() {
    if(timeLeft > 0) {
        timeLeft--;
        if(timeLeft == 0){
            result.classList.remove("hidden");
        }
        timeTag.innerHTML = timeLeft;
    }
    else {
        clearInterval(timer);
    }
}

function sendDataToServer(accuracy, wordCount, tempT) {
    // Create a JSON object with the variables
    const data = {
        accuracy: accuracy,
        wordCount: wordCount,
        tempT: tempT
    };

    fetch("server.php", {
        method: "POST",
        headers: {
            "Content-Type": "application/json"
        },
        body: JSON.stringify(data)
    })
    .then(response => response.text())
    .then(data => {
        console.log(data); // Handle the response from the server if needed
    })
    .catch(error => {
        console.error("Error sending data to server:", error);
    });
}




function resetgame() {
    console.log(mistake);
    console.log(wordCount);
    tempT=maxTime-timeLeft;
    sendDataToServer(acc,wordCount,tempT);
    inpField.value= "";
    clearInterval(timer);
    randomparagraph();
    timeLeft = maxTime;
    charIndex = mistake = isTyping = wordCount  = 0;
    timeTag.innerText = timeLeft;
    mistakeTag.innerText = mistake;
    resultmistakeTag.innerText = mistake;
    accuracy.innerText = 0;
    resultaccuracy.innerText = 0;
    crrTag.innerText = 0;
    resultcrrTag.innerText = 0;
    cpmTag.innerText = 0;
    resultcpmTag.innerText = 0;
    wpmTag.innerText = 0;
    resultwpmTag.innerText = 0;

}
randomparagraph();
inpField.addEventListener("input", initTyping);
tryAgainBtn.addEventListener("click", resetgame);
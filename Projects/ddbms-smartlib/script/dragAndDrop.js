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


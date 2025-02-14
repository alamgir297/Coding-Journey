document.addEventListener("DOMContentLoaded", function () {
    // Get the element to animate
    var animatedArea = document.getElementById("animatedArea");

    animatedArea.style.opacity = 0;

    setTimeout(function () {

        animatedArea.classList.remove("hidden");

        animatedArea.style.opacity = 1;
        animatedArea.classList.add("animate-slide-down");
    }, 500);
});
let btn1=document.querySelector("#mode");
let body=document.querySelector(".body");

let currmode="light";

btn1.addEventListener("click" ,()=>{
    if(currmode === "light") {
        currmode="dark";
        document.querySelector("body").style.backgroundColor="black";
        document.querySelector("body").style.color="white";
        
    } else{
        currmode="light";
        document.querySelector("body").style.backgroundColor="yellow";
        document.querySelector("body").style.color="black";

    }
    console.log(currmode);
});
const arr = ["Images/youR.png", "Images/youH.png", "Images/youS.png"];
const arr2 = ["Images/comR.png", "Images/comH.png", "Images/comS.png"];

let playerScore = 0;
let computerScore = 0;
let roundCount1 = 1;
let roundCount2 = 1;
let total = 0;
let total2 = 0;

function process(choice){
    
    let variable = choice;
    let getter = document.getElementById("img1");
    let getter2 = document.getElementById("img2");
    let getter3 = document.getElementById("score");
    let getter4 = document.getElementById("score2");
    let getter5 = document.getElementById("round");

    let computer = Math.floor(Math.random() * 3);
    console.log(computer);
        
    getter.src = arr[variable];

    getter2.src = arr2[computer];

    if((variable == 0 && computer == 2) || (variable == 1 && computer == 0) || (variable == 2 && computer == 1)){
        
        playerScore++;
        getter3.innerHTML = "" + playerScore;

    } else if(variable == computer){
        // Draw
    } else {

        computerScore++;
        getter4.innerHTML = "" + computerScore;
    }

    if(playerScore == 3){

        playerScore = 0;
        computerScore = 0;

        getter3.innerHTML = "" + playerScore;
        getter4.innerHTML = "" + computerScore;

        roundCount1++;
        roundCount2++;
        getter5.innerHTML = "" + roundCount1; 

        total++

        if(total == 2){

            reset();
            setTimeout(function(){
                alert("You Win!");  
            }, 1000); 
        } 

    } else if(computerScore == 3){

        playerScore = 0;
        computerScore = 0;

        getter3.innerHTML = "" + playerScore;
        getter4.innerHTML = "" + computerScore;

        roundCount1++;
        roundCount2++;

        getter5.innerHTML = "" + roundCount2; 

        total2++; 

        if(total2 == 2){
            reset();
            setTimeout(function(){
                alert("You Lose!");  // Delay the alert by 2 seconds (2000 milliseconds)
            }, 1000); 
        } 
    }

function reset(){
    playerScore = 0;
    computerScore = 0;
    roundCount1 = 1;
    roundCount2 = 1;
    total = 0;
    total2 = 0;

    document.getElementById("score").innerHTML = "0";
    document.getElementById("score2").innerHTML = "0";
    document.getElementById("round").innerHTML = "1";

    }
}
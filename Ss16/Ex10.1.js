//C1
var num1 =parseInt(prompt("Input the first number: " ));
var num2=parseInt(prompt("Input the second number: "));
var min = Math.min(num1, num2);
var max = Math.max(num1, num2);
var randomNum=Math.floor(Math.random()*(max-min-1)) + min + 1;
alert("Random number in range: " + min + " " + "to" + " " + max + " " + "is:" + " " + randomNum);
console.log("Random number in range: " + min + "to" + max + "is:"+ randomNum);
//C2
// let min = +prompt("Input min: ");
// let max = +prompt("Input max: ");
// let number = Math.floor((Math.random() * (max - min)) + min);
// document.write(`random: ${number}`);

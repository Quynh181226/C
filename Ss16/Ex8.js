let a=parseFloat(prompt("Input first value: "));
let b = parseFloat(prompt("Input second value: "))
let c= parseFloat(prompt("Input third value: "));
let max=a;
if(b>max){
    max=b;
}
if(c>max){
    max=c;
}
document.write("Max number is: "+max);
// document.write(`Max number is: ${max}`);
// alert("Maxx number is: " + max);

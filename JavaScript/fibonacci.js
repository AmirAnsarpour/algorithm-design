function fibonacciSeq(number) {
    if (number <= 1) {
        return number;
    } else {
        return fibonacciSeq(number - 1) + fibonacciSeq(number - 2);
    }
}

const myInput = parseInt(prompt("Enter Your Fibonacci Number: "));
const myFibonacciList = [];

for (let i = 0; i < myInput; i++) {
    myFibonacciList.push(fibonacciSeq(i));
}

if (myInput <= 0) {
    console.log("The Number is Wrong.");
} else {
    console.log(`Fibonacci Sequence: ${myFibonacciList}`);
}
package main

import (
	"fmt"
)

func fibonacciSeq(number int) int {
	if number <= 1 {
		return number
	} else {
		return fibonacciSeq(number-1) + fibonacciSeq(number-2)
	}
}

func main() {
	var myInput int
	fmt.Print("Enter Your Fibonacci Number: ")
	fmt.Scan(&myInput)

	var myFibonacciList []int

	for i := 0; i < myInput; i++ {
		myFibonacciList = append(myFibonacciList, fibonacciSeq(i))
	}

	if myInput <= 0 {
		fmt.Println("The Number is Wrong.")
	} else {
		fmt.Printf("Fibonacci Sequence: %v\n", myFibonacciList)
	}
}
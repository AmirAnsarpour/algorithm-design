#include <iostream>
#include <vector>

int fibonacciSeq(int number) {
    if (number <= 1) {
        return number;
    } else {
        return fibonacciSeq(number - 1) + fibonacciSeq(number - 2);
    }
}

int main() {
    int myInput;
    std::cout << "Enter Your Fibonacci Number: ";
    std::cin >> myInput;

    std::vector<int> myFibonacciList;

    for (int i = 0; i < myInput; i++) {
        myFibonacciList.push_back(fibonacciSeq(i));
    }

    if (myInput <= 0) {
        std::cout << "The Number is Wrong." << std::endl;
    } else {
        std::cout << "Fibonacci Sequence: ";
        for (int num : myFibonacciList) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

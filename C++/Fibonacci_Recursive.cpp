// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <ctime>

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    int n = 40;

    clock_t start_time = clock();
    int result = fibonacci_recursive(n);
    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Fibonacci(" << n << ") = " << result << std::endl;
    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}

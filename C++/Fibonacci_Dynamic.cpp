// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <vector>
#include <ctime>

int fibonacci_dynamic(int n) {
    if (n <= 1) {
        return n;
    }

    std::vector<int> fib_values(n + 1, 0);
    fib_values[0] = 0;
    fib_values[1] = 1;

    for (int i = 2; i <= n; ++i) {
        fib_values[i] = fib_values[i - 1] + fib_values[i - 2];
    }

    return fib_values[n];
}

int main() {
    int n = 4000;

    clock_t start_time = clock();
    int result = fibonacci_dynamic(n);
    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Fibonacci(" << n << ") = " << result << std::endl;
    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}

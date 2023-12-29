// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <ctime>

int binomial_recursive(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomial_recursive(n - 1, k - 1) + binomial_recursive(n - 1, k);
    }
}

int main() {
    int n = 30;
    int k = 20;

    clock_t start_time = clock();
    int result = binomial_recursive(n, k);
    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "C(" << n << ", " << k << ") = " << result << std::endl;
    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}

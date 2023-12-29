// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <vector>
#include <ctime>

int binomial_dynamic(int n, int k) {
    std::vector<std::vector<int>> dp_table(n + 1, std::vector<int>(k + 1, 0));

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= std::min(i, k); ++j) {
            if (j == 0 || j == i) {
                dp_table[i][j] = 1;
            } else {
                dp_table[i][j] = dp_table[i - 1][j - 1] + dp_table[i - 1][j];
            }
        }
    }

    return dp_table[n][k];
}

int main() {
    int n = 3000;
    int k = 2000;

    clock_t start_time = clock();
    int result = binomial_dynamic(n, k);
    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "C(" << n << ", " << k << ") = " << result << std::endl;
    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}

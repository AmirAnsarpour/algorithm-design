// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <vector>
#include <ctime>

int knapsack_dynamic_programming(const std::vector<int>& weights, const std::vector<int>& values, int capacity) {
    int n = weights.size();
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 0; w <= capacity; ++w) {
            if (weights[i - 1] <= w) {
                dp[i][w] = std::max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    std::vector<int> weights = {2, 1, 3, 2};
    std::vector<int> values = {12, 10, 20, 15};
    int capacity = 5000;

    clock_t start_time = clock();
    int result = knapsack_dynamic_programming(weights, values, capacity);
    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Maximum value: " << result << std::endl;
    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}

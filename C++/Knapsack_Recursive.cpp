// AmirAnsarpour
// 40022830117248
// https://github.com/AmirAnsarpour
// C++

#include <iostream>
#include <vector>
#include <ctime>

int knapsack_recursive(const std::vector<int>& weights, const std::vector<int>& values, int capacity, int n) {
    if (n == 0 || capacity == 0) {
        return 0;
    }

    if (weights[n - 1] > capacity) {
        return knapsack_recursive(weights, values, capacity, n - 1);
    } else {
        int include_item = values[n - 1] + knapsack_recursive(weights, values, capacity - weights[n - 1], n - 1);
        int exclude_item = knapsack_recursive(weights, values, capacity, n - 1);
        return std::max(include_item, exclude_item);
    }
}

int main() {
    std::vector<int> weights = {2, 1, 3, 2};
    std::vector<int> values = {12, 10, 20, 15};
    int capacity = 5000;

    int n = weights.size();

    clock_t start_time = clock();

    int result = knapsack_recursive(weights, values, capacity, n);

    clock_t end_time = clock();

    double execution_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Maximum value: " << result << std::endl;
    std::cout << "Execution time: " << execution_time << " seconds." << std::endl;

    return 0;
}

# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour
# Python

import time

def knapsack_dynamic_programming(weights, values, capacity):
    n = len(weights)
    dp = [[0] * (capacity + 1) for _ in range(n + 1)]

    for i in range(1, n + 1):
        for w in range(capacity + 1):
            if weights[i - 1] <= w:
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w])
            else:
                dp[i][w] = dp[i - 1][w]

    return dp[n][capacity]

weights = [2, 1, 3, 2]
values = [12, 10, 20, 15]
capacity = 5000

start_time = time.time()
result = knapsack_dynamic_programming(weights, values, capacity)
end_time = time.time()
execution_time = "{:.10f}".format(end_time - start_time)

print(f"Maximum value:{result}.")
print(f"Execution time: {execution_time} Secend.")
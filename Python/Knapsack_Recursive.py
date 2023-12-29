# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour
# Python

import time

def knapsack_recursive(weights, values, capacity, n):
    if n == 0 or capacity == 0:
        return 0

    if weights[n - 1] > capacity:
        return knapsack_recursive(weights, values, capacity, n - 1)
    else:
        include_item = values[n - 1] + knapsack_recursive(weights, values, capacity - weights[n - 1], n - 1)
        exclude_item = knapsack_recursive(weights, values, capacity, n - 1)
        return max(include_item, exclude_item)

weights = [2, 1, 3, 2]
values = [12, 10, 20, 15]
capacity = 5000

n = len(weights)

start_time = time.time()

result = knapsack_recursive(weights, values, capacity, n)

end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"Maximum value: {result}")
print(f"Execution time: {execution_time} Secend.")
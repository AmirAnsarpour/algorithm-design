# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour
# Python

import time
import random


def selection_sort(arr):
    n = len(arr)

    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        arr[i], arr[min_index] = arr[min_index], arr[i]


input_list = [random.randint(1, 1000) for _ in range(10000)]

print(f"Original list: {input_list}")

start_time = time.time()
selection_sort(input_list)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"Sorted list: {input_list}")
print(f"Execution time: {execution_time} seconds.")

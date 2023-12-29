# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour
# Python

import time
import random


def bubble_sort(arr):
    n = len(arr)

    for i in range(n):
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True

        if not swapped:
            break


input_list = [random.randint(1, 1000) for _ in range(10000)]

print(f"Original list: {input_list}")

start_time = time.time()
bubble_sort(input_list)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"Sorted list: {input_list}")
print(f"Execution time: {execution_time} seconds.")

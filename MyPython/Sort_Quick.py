# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour

import time
import random

def quick_sort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]

    return quick_sort(left) + middle + quick_sort(right)

input_list = [random.randint(1, 1000) for _ in range(20)]
print(f"Original list: {input_list}")

start_time = time.time()
sorted_list = quick_sort(input_list)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"Sorted list: {sorted_list}")
print(f"Execution time: {execution_time} seconds.")

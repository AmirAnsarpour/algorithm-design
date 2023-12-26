# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour

import time
import random

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

input_list = [random.randint(1, 1000) for _ in range(20)]
print(f"Original list: {input_list}")

start_time = time.time()
merge_sort(input_list)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"Sorted list: {input_list}")
print(f"Execution time: {execution_time} Secend.")
# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour
# Python

import time


def fibonacci_recursive(n):
    if n <= 1:
        return n
    else:
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)


n = 40
start_time = time.time()
result = fibonacci_recursive(n)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"Fibonacci({n}) = {result}")
print(f"Execution time: {execution_time} Secend.")

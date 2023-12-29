# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour
# Python

import time

def fibonacci_dynamic(n):
    fib_values = [0] * (n + 1)

    if n <= 1:
        return n

    fib_values[0] = 0
    fib_values[1] = 1

    for i in range(2, n + 1):
        fib_values[i] = fib_values[i - 1] + fib_values[i - 2]

    return fib_values[n]

n = 4000
start_time = time.time()
result = fibonacci_dynamic(n)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"Fibonacci({n}) = {result}")
print(f"Execution time: {execution_time} Secend.")
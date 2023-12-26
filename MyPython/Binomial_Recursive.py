# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour

import time

def binomial_recursive(n, k):
    if k == 0 or k == n:
        return 1
    else:
        return binomial_recursive(n-1, k-1) + binomial_recursive(n-1, k)

n = 30
k = 20
start_time = time.time()
result = binomial_recursive(n, k)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)


print(f"C({n}, {k}) = {result}")
print(f"Execution time: {execution_time} Secend.")
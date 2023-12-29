# AmirAnsarpour
# 40022830117248
# https://github.com/AmirAnsarpour
# Python

import time

def binomial_dynamic(n, k):
    dp_table = [[0] * (k + 1) for _ in range(n + 1)]

    for i in range(n + 1):
        for j in range(min(i, k) + 1):
            if j == 0 or j == i:
                dp_table[i][j] = 1
            else:
                dp_table[i][j] = dp_table[i - 1][j - 1] + dp_table[i - 1][j]

    return dp_table[n][k]

n = 3000
k = 2000
start_time = time.time()
result = binomial_dynamic(n, k)
end_time = time.time()

execution_time = "{:.10f}".format(end_time - start_time)

print(f"C({n}, {k}) = {result}")
print(f"Execution time: {execution_time} Secend.")
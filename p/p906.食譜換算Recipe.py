import math

n, m = map(int, input().split())

x = list(map(int, input().split()))

for i in range(n):
    x[i] = math.ceil(float(x[i]) * x[-1] / m)

print(*(x[0:-1]))

a = list(map(int, input().split()))
b = list(map(int, input().split()))

best = float("inf")
best_start = -1
best_end = -1
for i in range(10):
    for j in range(i, 10):
        price = (j - i) * 1000 + a[i] + b[j]
        if (price < best):
            best = price
            best_start = i + 1
            best_end = j + 1
print(best_start, best_end, best)

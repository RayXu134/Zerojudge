import math

n = int(input())
ks = list(map(int, input().split()))
ans = []
for k in ks:
    if k % 3 == 0 and k % 2 == 0:
        ans.append(1)
    elif (k & 1) and k % 3 != 0:
        ans.append(2)
    elif int(math.sqrt(k)) == math.sqrt(k) or (k % 7 != 0 and k % 2 == 0):
        ans.append(3)
    else:
        ans.append(0)

print(" ".join(list(map(str, ans))))

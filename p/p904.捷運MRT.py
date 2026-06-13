n = int(input())
x = list(map(int, input().split()))

a = sum(x)

if 11 <= n and n <= 20:
    a *= 0.95
elif 21 <= n and n <= 40:
    a *= 0.90
elif n >= 41:
    a *= 0.85

a = int(a + 0.5)

if (a > 1200):
    print(1200)
else:
    print(int(a + 0.5))

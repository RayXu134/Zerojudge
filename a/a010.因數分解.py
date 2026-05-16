n = int(input())

factors = []

for i in range(2, n//2 + 1):
    count = 0
    while n % i == 0:
        n //= i
        count += 1

    if count > 0:
        if count == 1:
            factors.append(str(i))
        else:
            factors.append(f"{i}^{count}")

    if n == 1:
        break

if n > 1:
    factors.append(str(n))

print(" * ".join(factors))

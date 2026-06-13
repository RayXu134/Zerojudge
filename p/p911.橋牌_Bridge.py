s = input().split()

count_s = 0
count_h = 0
count_d = 0
count_c = 0
for i in s:
    if i[0] == "S":
        count_s += 1
    if i[0] == "H":
        count_h += 1
    if i[0] == "D":
        count_d += 1
    if i[0] == "C":
        count_c += 1

hcp = 0
for i in s:
    if i[1:] == "A":
        hcp += 4
    if i[1:] == "K":
        hcp += 3
    if i[1:] == "Q":
        hcp += 2
    if i[1:] == "J":
        hcp += 1

print(count_s, count_h, count_d, count_c)
print(hcp)

names = input().split()
group = [[], [], []]

for i in range(0, len(names), 3):
    group[0].append(names[i])
for i in range(1, len(names), 3):
    group[1].append(names[i])
for i in range(2, len(names), 3):
    group[2].append(names[i])

for i in range(3):
    print(" ".join(group[i]))

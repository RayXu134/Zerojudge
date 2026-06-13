n, k = map(int, input().split())
card = []
for i in range(n):
 card.append(input())
for c in card[k:]:
 print(c)
for c in card[:k]:
 print(c)

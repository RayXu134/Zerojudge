month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

def days_from_start_of_year(m, d):
    return sum(month[:m]) + d

d1, d2 = map(int, input().split())
b1, b2 = map(int, input().split())
d1 -= 1
b1 -= 1

d_of_year = days_from_start_of_year(d1, d2)
b_of_year = days_from_start_of_year(b1, b2)

days = 0
if (b_of_year < d_of_year):
    days += 365
days += b_of_year - d_of_year

print(days)

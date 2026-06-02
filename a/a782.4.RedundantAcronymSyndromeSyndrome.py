while True:
    s = input()
    if s == "END":
        break

    ans = ""
    for i in s.split():
        ans += i[0].upper()
    ans += " "
    ans += s.split()[-1]

    print(ans)

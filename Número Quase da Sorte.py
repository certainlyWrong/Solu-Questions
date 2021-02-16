
numberKarma, num = 0, int(input())

while num > 0:
    d = num % 10
    if d == 7 or d == 4:
        numberKarma += 1
    num //= 10

if numberKarma == 4 or numberKarma == 7:
    print('YES')
else:
    print('NO')

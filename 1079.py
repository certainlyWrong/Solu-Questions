#!python3

casos = int(input())

for i in range(casos):
    j, num = 3, [0, 0, 0]
    while j:
        num[0] = float(input())
        num[1] = float(input())
        num[2] = float(input())
        j -= 1
    print('{:.2}'.format((num[0]*2 + num[1]*3 + num[2]*5)/10))

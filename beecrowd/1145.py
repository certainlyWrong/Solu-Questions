
line = [int(iten) for iten in input().split()]
x = line[0]
y = line[1] + 1

for i in range(1, y):
    if i == x or i == y - 1:
        print(i)
        x += line[0]
        continue
    print(i, end=' ')

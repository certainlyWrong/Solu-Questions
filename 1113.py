#!python3.8

# adriano r. de sousa
i, values = 0, list()
while True:
    values.append([int(x) for x in input().split()])

    if values[i][0] == values[i][1]:
        break
    i += 1

i = 0
while True:

    if values[i][0] == values[i][1]:
        break

    if values[i][0] > values[i][1]:
        print('Decrescente')
    else:
        print('Crescente')
    i += 1

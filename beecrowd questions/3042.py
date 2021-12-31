#!python3.8

def positionNoel(noel, *args):
    if noel == 0:
        if args[1] == 0:
            return [1, 1]
        return [2, 2]
    elif noel == 1:
        if args[0] == 0:
            return [0, 1]
        return [2, 1]
    elif noel == 2:
        if args[1] == 0:
            return [1, 1]
        return [0, 2]

while True:
    
    values, rangee = list(), int(input())
    if rangee == 0:
        break

    noel, noel_aux = [1, 0], list()

    for j in range(rangee):
        values.append([int(x) for x in input().split()])

        if 1 not in values[j]:
            continue

        elif values[j][noel[0]] == 0:
            continue

        else:
            noel_aux = positionNoel(noel[0], *values[j])
            noel[0] = noel_aux[0]
            noel[1] += noel_aux[1]
    print(noel[1])


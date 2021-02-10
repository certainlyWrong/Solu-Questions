
cases = int(input())

while cases:
    soma = 0
    values = [int(x) for x in input().split()]

    if values[0] > values[1]:
        values[1], values[0] = values[0], values[1]

    for x in range(values[0]+1, values[1]):
        if x % 2 != 0:
            soma += x

    print(soma)
    cases -= 1


n = int(input())
array = list()

for i in range(n):
    array.append([int(iten) for iten in input().split()])

constante, validar = 0, True
somaC = somaL = diag1 = diag2 = 0

for i in range(n):

    if i == 0:
        constante = sum(array[i])

    somaL = sum(array[i])
    somaC = 0
    diag1 += array[i][i]
    diag2 += array[i][n-i-1]

    for coluns in range(n):
        somaC += array[coluns][i]

    if somaL != constante or somaC != constante:
        validar == False
        break

if validar and diag1 == constante and diag2 == constante:
    print(constante)
else:
    print(-1)
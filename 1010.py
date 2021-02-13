#!python3.8

# adriano r. de sousa

dados1 = list([float(x) for x in input().split()])
dados2 = list([float(x) for x in input().split()])

print('VALOR A PAGAR: R$ %.2f' %(dados1[1] * dados1[2] + dados2[1] * dados2[2]))

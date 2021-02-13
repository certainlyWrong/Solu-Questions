#!python3.8

# adriano r. de sousa

from math import sqrt

pontos = [[float(x) for x in input().split()], [float(x) for x in input().split()]]

resultado = sqrt(pow(pontos[1][1] - pontos[0][1], 2) + pow(pontos[1][0] - pontos[0][0], 2))

# python3.8
# print(f'{resultado:.4f}')

# python3.4
print('{:.4f}' .format(resultado))

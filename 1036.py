#!python3.8

from math import pow, sqrt

values = [float(x) for x in input().split()]

delta = pow(values[1], 2) - 4 * values[0] * values[2]

if delta < 0 or values[0] == 0:
    print('Impossivel calcular')

else:
    roots = [
        ((-values[1]) + sqrt(delta))/(2 * values[0]),
        ((-values[1]) - sqrt(delta))/(2 * values[0])
    ]
    # python3.8
    # print(f'R1 = {roots[0]:.5f}\nR2 = {roots[1]:.5f}')
    # python3.4
    print('R1 = {:.5f}\nR2 = {:.5f}' .format(roots[0], roots[1]))

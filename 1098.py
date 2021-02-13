#!python3.8

# adriano r. de sousa

from decimal import Decimal

i, j = 0, 1

while i <= 2:
    if i == 1: i = int(i)
    elif i == 2: i = int(2)
    
    for x in range(0, 3):
        print(f'I={i} J={j + x + i}')

    i += Decimal('0.2')

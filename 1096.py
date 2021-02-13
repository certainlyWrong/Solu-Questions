#!python3.8

# adriano r. de sousa

i, j, k = 1, 7, 0

while i <= 9:
    for contador in range(0, 3):
        print(f'I={i} J={j - contador + k}')
    i+=2
    k+=2

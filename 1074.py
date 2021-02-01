#!python3

casos = int(input())

while casos:
    num = int(input())
    
    if num == 0:
        print('NULL')
    elif num % 2 == 0:
        print('EVEN', end='')
    else:
        print('ODD', end='')
    if num < 0:
        print(' NEGATIVE')
    elif num > 0:
        print(' POSITIVE')
    casos -= 1

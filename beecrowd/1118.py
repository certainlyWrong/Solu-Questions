
a = True

while a:
    n1, n2 = 0, 0

    while 1:
        n1 = float(input())
        if n1 >= 0 and n1 <= 10:
            break
        print('nota invalida')
    
    while 1:
        n2 = float(input())
        if n2 >= 0 and n2 <= 10:
            break
        print('nota invalida')
    print(f'media = {(n1+n2)/2:.2f}')

    while 1:
        print('novo calculo (1-sim 2-nao)')
        b = int(input())
        if b != 1 and b != 2:
            continue
        if b == 1:
            break
        a = False
        break

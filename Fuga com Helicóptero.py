
number = [int(itens) for itens in input().split()]

# facilitando entendimento
helicoptero = number[0]
policia = number[1]
fugitivo = number[2]

while True:

    if fugitivo == 15 and number[3] == 1:
        fugitivo = 0
    elif fugitivo == 0 and number[3] == -1:
        fugitivo = 15   
    else:
        fugitivo += number[3]
    
    if fugitivo == policia:
            print('N')
            break
    elif fugitivo == helicoptero:
        print('S')
        break


#!python3.8

cases = int(input())

inform, total, rabbits, rats, flogs = (), 0, 0, 0, 0

while cases:

    inform = (input().split())

    if inform[1] == 'C':
        rabbits += int(inform[0])
    elif inform[1] == 'R':
        rats += int(inform[0])
    elif inform[1] == 'S':
        flogs += int(inform[0])
    
    total += int(inform[0])
    
    cases -= 1

print(f'''Total: {total} cobaias
Total de coelhos: {rabbits}
Total de ratos: {rats}
Total de sapos: {flogs}
Percentual de coelhos: {rabbits*100/total:.2f} %
Percentual de ratos: {rats*100/total:.2f} %
Percentual de sapos: {flogs*100/total:.2f} %''')


n = int(input())
j = 0

while n:
    string = (input())

    tam = int(len(string))
    tamM = int(len(string)/2)-1
    for i in range(tamM, -1, -1):
        print(string[i], end='')
    for i in range(tam-1, tamM, -1):
        print(string[i], end='')
    j += 1
    n -= 1
    print()

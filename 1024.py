
cases = int(input())

while cases:
    string, string_aux = input(), list()
    tam, index = len(string), 0

    for i in string:
        char = ord(i)

        if char >= 65 and char <= 90 or char >= 97 and char <= 122:
            string_aux.append(chr(char+3))
        else:
            string_aux.append(i)

        if index <= tam/2-1 and tam % 2 == 0:
            string_aux[index] = chr(ord(string_aux[index])-1)
        elif index <= tam/2 and tam % 2 != 0:
            string_aux[index] = chr(ord(string_aux[index])-1)

        index += 1
    string = ''.join(string_aux)
    print(string[::-1])
    cases-=1

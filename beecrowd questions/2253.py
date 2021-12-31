
from string import ascii_lowercase as lowercase, ascii_uppercase as uppercase, digits

while True:
    try:
        senha = input()
    except EOFError:
        break

    validar, minus, maius = True, False, False
    
    tam = len(senha)
    if tam < 6 or tam > 32:
        validar = False
    else:
        for i in senha:
            if i not in digits + uppercase + lowercase:
                validar = False
                break
            elif not minus or not maius:
                if i in lowercase and minus == False:
                    minus = True
                elif i in uppercase and maius == False:
                    maius = True

    if validar == True and minus == True and maius == True:
        print('Senha valida.')
    else:
        print('Senha invalida.')

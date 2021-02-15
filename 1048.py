#!pyrhon3.8

salario = float(input())
percent = 0

if salario > 0 and salario <= 400:
    percent = 15/100
elif salario > 400 and salario <= 800:
    percent = 12/100
elif salario > 800 and salario <= 1200:
    percent = 10/100
elif salario > 1200 and salario <= 2000:
    percent = 7/100
elif salario > 2000:
    percent = 4/100

#python3.8
# print(f'''Novo salario: {salario+salario*percent:.2f}
# Reajuste ganho: {salario*percent:.2f}
# Em percentual: {percent*100:.0f} %''')

#python3.4
print('Novo salario: {:.2f}\nReajuste ganho: {:.2f}\nEm percentual: {:.0f} %' .format(salario+salario*percent, salario*percent, percent*100))

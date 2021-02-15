#!python3.8

num = int(input())
num_in, num_out = 0, 0

for i in range(num):
    a = int(input())
    
    if 10 <= a and a <= 20:
        num_in += 1
    else:
        num_out += 1

print('{} in\n{} out' .format(num_in, num_out))

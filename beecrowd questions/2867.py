#!python3.8

cases = int(input())

while cases:

    values = [int(x) for x in input().split()]

    number = values[0]**values[1]

    print(len(str(number)))

    cases -= 1


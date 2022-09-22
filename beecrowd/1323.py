#1python3.8

sqr = int(input())

while sqr != 0:
    result = 0
    for i in range(1, sqr+1):
        result += i*i
    print(result)
    sqr = int(input())

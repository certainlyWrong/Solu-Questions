#!python3.8

# adriano r. de sousa

num = int(input())

for i in range(1, 10001):
    if i % num == 2:
        print(i)

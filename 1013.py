#!python3.8

# adriano r. de sousa

values = [int(x) for x in input().split()]

highest_value = (values[0]+values[1]+abs(values[0]-values[1]))/2

highest_value = (highest_value+values[2]+abs(highest_value-values[2]))/2

print(f'{int(highest_value)} eh o maior')

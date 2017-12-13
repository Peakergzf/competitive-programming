input_nab = input().split()
n = int(input_nab[0])
a = int(input_nab[1])
b = int(input_nab[2])

front = n - a

print(min(front, b + 1))

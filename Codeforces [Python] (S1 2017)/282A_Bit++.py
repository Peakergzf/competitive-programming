n = int(input())
statement_list = []
for i in range(n):
    statement = input()
    statement_list.append(statement)

increase = 0
decrease = 0
for i in range(n):
    if statement_list[i][1] == '+':
        increase += 1
    else:
        decrease += 1
x = increase - decrease
print(x)

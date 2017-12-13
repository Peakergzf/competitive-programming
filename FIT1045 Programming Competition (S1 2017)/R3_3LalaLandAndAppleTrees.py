from operator import itemgetter

n = int(input())
x_a_list = []
max_apple = 0
for i in range(n):
    input_x_a = input().split()
    input_x_a[0] = int(input_x_a[0])
    input_x_a[1] = int(input_x_a[1])
    max_apple += input_x_a[1]
    x_a_list.append(input_x_a)

positive_list = []
negative_list = []
for i in range(n):
    if x_a_list[i][0] > 0:
        positive_list.append(x_a_list[i])
    else:
        negative_list.append(x_a_list[i])

positive_list.sort(key=itemgetter(0))
negative_list.sort(key=itemgetter(0))
negative_list.sort(reverse=True)

diff = abs(len(positive_list) - len(negative_list))
if diff > 1:
    if len(positive_list) > len(negative_list):
        for i in range(diff-1):
            max_apple -= positive_list[-i-1][1]
    else:
        for i in range(diff-1):
            max_apple -= negative_list[-i-1][1]

print(max_apple)

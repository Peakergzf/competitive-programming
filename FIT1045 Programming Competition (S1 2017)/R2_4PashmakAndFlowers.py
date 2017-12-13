n = int(input())
flowers = input().split()
flower_list = []
for i in flowers:
    i = int(i)
    flower_list.append(i)

flower_list.sort()

max_diff = flower_list[n - 1] - flower_list[0]

flag = True
for i in range(len(flower_list) - 1):
    if flower_list[i] != flower_list[i + 1]:
        flag = False
        break

if flag:
    num_ways = int(n * (n - 1) / 2)
else:
    num_min = 1
    while flower_list[num_min - 1] == flower_list[num_min]:
        num_min += 1

    num_max = 1
    max_counter = n - 1
    while flower_list[max_counter] == flower_list[max_counter - 1]:
        num_max += 1
        max_counter -= 1

    num_ways = num_max * num_min

print(max_diff, num_ways)

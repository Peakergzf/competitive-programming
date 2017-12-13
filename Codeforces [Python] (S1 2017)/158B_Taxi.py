n = int(input())
s_list = input().split()
for i in range(n):
    s_list[i] = int(s_list[i])

one, two, three, four = 0, 0, 0, 0

for i in s_list:
    if i == 1:
        one += 1
    elif i == 2:
        two += 1
    elif i == 3:
        three += 1
    elif i == 4:
        four += 1

taxi = four

taxi += min(one, three)
one_left = one - min(one, three)
three_left = three - min(one, three)
taxi += three_left

taxi += two // 2
two_left = two % 2

if one_left >= 2:
    if two_left == 1:
        taxi += 1
        one_left -= 2
    taxi += (one_left - 1) // 4 + 1
elif one_left == 1:
    taxi += 1
else:
    taxi += two_left
print(taxi)

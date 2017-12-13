import math
input_value = input()
input_list = input_value.split()
circle_list = []
for i in input_list:
    i = int(i)
    circle_list.append(i)
r = circle_list[0]
x1 = circle_list[1]
y1 = circle_list[2]
x2 = circle_list[3]
y2 = circle_list[4]

distance = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
if distance == 0:
    n = 0
elif distance < 2*r:
    n = 2
elif distance == 2*r:
    n = 1
else:
    n = int((distance - 2 * r) // (2 * r)) + 2

print(n)

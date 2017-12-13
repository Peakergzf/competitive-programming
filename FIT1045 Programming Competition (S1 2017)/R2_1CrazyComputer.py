n_c = input()
nc_list = n_c.split()
n = int(nc_list[0])
c = int(nc_list[1])

input_second = input()
input_second_list = input_second.split()
second_list = []
for i in input_second_list:
    i = int(i)
    second_list.append(i)

remain = 1
for i in range(n - 1):
    if second_list[i + 1] - second_list[i] <= c:
        remain += 1
    else:
        remain = 1

print(remain)

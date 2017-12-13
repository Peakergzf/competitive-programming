num_of_boys = int(input())
input_boy = input().split()
boy_list = []
for count_b in range(num_of_boys):
    boy_list.append(int(input_boy[count_b]))

num_of_girls = int(input())
input_girls = input().split()
girl_list = []
for count_g in range(num_of_girls):
    girl_list.append(int(input_girls[count_g]))

boy_list.sort()
girl_list.sort()

count = 0
for i in range(len(boy_list)):
    for j in range(len(girl_list)):
        if abs(boy_list[i] - girl_list[j]) <= 1:
            count += 1
            girl_list.remove(girl_list[j])
            break
print(count)

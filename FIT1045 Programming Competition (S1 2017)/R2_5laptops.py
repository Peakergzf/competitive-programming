n = int(input())
laptop_list = []
for i in range(n):
    laptop_input = input().split()
    l_list = []
    for j in laptop_input:
        j = int(j)
        l_list.append(j)
    laptop_list.append(l_list)

price_sort_list = []
for zero_count in range(n):
    price_sort_list.append(0)
for laptop in laptop_list:
    price_index = laptop[0] - 1
    quality = laptop[1]
    price_sort_list[price_index] = quality

output = 'Poor Alex'
for k in range(len(price_sort_list) - 1):
    if price_sort_list[k] > price_sort_list[k + 1]:
        output = 'Happy Alex'
        break
print(output)

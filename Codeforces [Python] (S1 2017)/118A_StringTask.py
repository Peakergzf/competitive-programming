input_str = input().lower()
list_str = list(input_str)

n = len(list_str)
k = 0
while k < n:
    if list_str[k] not in 'a e i o u y':
        list_str.insert(k, '.')
        n += 1
        k += 1
    k += 1

for i in range(n):
    if list_str[i] in 'a e i o u y':
        list_str[i] = ''

output_str = ''.join(list_str)
print(output_str)


# Alternative way:
# ---------------------------------------------------------------------------------------------------------
# def check_vowel(letter):
#     if letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u' or letter == 'y':
#         return True
#     else:
#         return False
#
#
# input_str = input().lower()
# list_str = list(input_str)
#
# output_list = []
# for i in range(len(list_str)):
#     if not check_vowel(list_str[i]):
#         output_list.append('.')
#         output_list.append(list_str[i])
#
# output_str = ''.join(output_list)
# print(output_str)

n_k = input().split()
n = int(n_k[0])
k = int(n_k[1])
pw_list = []
for n_count in range(n):
    input_password = input()
    pw_list.append(input_password)

password = input()

pw_list.sort(key=len)

before_best = 0
for i in pw_list:
    if len(i) != len(password):
        before_best += 1
    else:
        break

if before_best >= k:
    if (before_best + 1) % k == 0:
        best = ((before_best + 1) / k - 1) * 5 + before_best + 1
    else:
        best = (before_best // k) * 5 + before_best + 1
else:
    best = before_best + 1

pw_list.reverse()
after_pw_len = 0
for i in pw_list:
    if len(i) != len(password):
        after_pw_len += 1
    else:
        break

to_worst = n - after_pw_len
if to_worst >= k:
    if to_worst % k == 0:
        worst = (to_worst / k - 1) * 5 + to_worst
    else:
        worst = (to_worst // k) * 5 + to_worst
else:
    worst = to_worst

best = int(best)
worst = int(worst)
print(best, worst)

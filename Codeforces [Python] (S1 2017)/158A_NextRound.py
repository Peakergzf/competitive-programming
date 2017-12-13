n_k = input().split()
n = int(n_k[0])
k = int(n_k[1])
scores = input().split()
for i in range(n):
    scores[i] = int(scores[i])
k_score = scores[k - 1]

next_round = 0
for i in scores:
    if i > 0 and i >= k_score:
        next_round += 1
print(next_round)

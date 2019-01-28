n = int(input())
S = input()
T = "".join(set(S))

freqT = [T.count(chr(i)) for i in range(255)]
freqS = [0 for _ in range(255)]

ans = n
cnt = 0  # currently the number of distinct characters in S
j = 0

for i in range(n):
    freqS[ord(S[i])] += 1
    if freqS[ord(S[i])] <= freqT[ord(S[i])]:
        cnt += 1

    if cnt == len(T):  # current substring [0, i] contains all
        while freqS[ord(S[j])] > freqT[ord(S[j])]:  # see if it can be shorter from the front
            freqS[ord(S[j])] -= 1
            j += 1
        ans = min(ans, i - j + 1)

print(ans)

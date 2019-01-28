s1 = input()
s2 = input()


def freq_cnt(s):
    freq = [0 for _ in range(255)]
    for i in range(len(s)):
        if s[i] != ' ':
            freq[ord(s[i])] += 1
    return freq


freq_s1 = freq_cnt(s1)
freq_s2 = freq_cnt(s2)

ans = True
for j in range(len(freq_s2)):
    if freq_s2[j] > freq_s1[j]:
        ans = False

print("YES" if ans else "NO")

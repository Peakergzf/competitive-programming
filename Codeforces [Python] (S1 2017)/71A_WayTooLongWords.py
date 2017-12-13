n = int(input())

for i in range(n):
    word = input()
    if len(word)<=10:
        answer = word
    else:
        answer = word[0]+str(len(word)-2)+word[-1]
    print(answer)

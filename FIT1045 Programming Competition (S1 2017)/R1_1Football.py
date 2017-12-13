userInput = input()
if len(userInput) < 7:
    situation = 'NO'
else:
    situation = 'NO'
    for i in range(0, len(userInput)-6):
        if userInput[i:i+7] == '1111111' or userInput[i:i+7] == '0000000':
            situation = 'YES'
print(situation)

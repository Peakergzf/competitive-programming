userInput = input()
oldYear = int(userInput)+1
yearList = [int(i) for i in str(oldYear)]
while yearList[0] == yearList[1] or yearList[0] == yearList[2] or yearList[0] == yearList[3] or yearList[1] == yearList[2] or yearList[1] == yearList[3] or yearList[2] == yearList[3]:
    oldYear += 1
    yearList = [int(i) for i in str(oldYear)]
newYear = str(yearList[0])+str(yearList[1])+str(yearList[2])+str(yearList[3])
print(newYear)

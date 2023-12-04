def is_Beauty_Num(strNum):
    i = 0
    while i < len(strNum):
        for n in range(i, i+int(strNum[i])):
            if i + int(strNum[n]) > len(strNum):
                return False
            if strNum[n] != strNum[i]:
                return False
        i += int(strNum[i])
    
    return True
n = int(input())
number = []
ans = 0
def makeNum(cur):
    global ans
    if cur > n:
        strNumber = ''.join(number)
        if is_Beauty_Num(strNumber):
            ans += 1
        return
    
    for i in range(1,5):
        number.append(str(i))       
        makeNum(cur+1)
        number.pop()

makeNum(1)
print(ans)
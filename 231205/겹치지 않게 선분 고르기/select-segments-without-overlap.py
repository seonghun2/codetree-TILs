n = int(input())
arr = []

for _ in range(n):
    arr.append(list(map(int, input().split())))

selectedLine = []
selectedLine.sort(key = lambda x : (x[0], x[1]))
ans = 0

def makeLine(cur):
    global ans

    if cur == n :
        # print(selectedLine)
        if isOverlap(selectedLine):
            ans = max(ans, len(selectedLine))
        return
    
    selectedLine.append(arr[cur])
    makeLine(cur + 1)
    selectedLine.pop()

    makeLine(cur + 1)

def isOverlap(lines):
    for i in range(len(lines)-1):
        if lines[i][1] >= lines[i+1][0]:
            return False
    return True

makeLine(0)
print(ans)
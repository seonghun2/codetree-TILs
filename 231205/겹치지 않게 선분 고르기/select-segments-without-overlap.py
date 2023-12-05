n = int(input())
# n = 7
# arr = [[491, 696],[500, 967],[311, 878],[53, 720],[634, 728],[380, 570],[55, 682]]
arr = []
for _ in range(n):
    arr.append(list(map(int, input().split())))

selectedLine = []

ans = 0

def makeLine(cur):
    global ans

    if cur == n :
        selectedLine.sort(key = lambda x : x[0])
        if isOverlap(selectedLine):
            # print(selectedLine)
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
import sys

def calc_distance(x1,y1,x2,y2):
    return abs(x1 - x2) + abs(y1 - y2)

n = int(input())
checkPoints = []
ans = sys.maxsize

for _ in range(n):
    checkPoints.append(list(map(int, input().split())))

for i in range(1, n-1):
    distance = 0
    for j in range(n-1):
        if j == i:
            continue

        if j == i-1:
            x1 = checkPoints[j][0]
            y1 = checkPoints[j][1]
            x2 = checkPoints[j+2][0]
            y2 = checkPoints[j+2][1]
        else:
            x1 = checkPoints[j][0]
            y1 = checkPoints[j][1]
            x2 = checkPoints[j+1][0]
            y2 = checkPoints[j+1][1]
        distance += calc_distance(x1,y1,x2,y2)
    
    ans = min(distance, ans)

print(ans)
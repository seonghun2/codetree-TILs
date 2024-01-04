import sys

N, R = map(int, input().split())
arr = []
for _ in range(N):
    arr.append(list(map(int, input().split())))
xSpaces = []
ySpaces = []
xsortedArr = sorted(arr, key = lambda x : x[0])
ysortedArr = sorted(arr, key = lambda x : x[0])

for i in range(xsortedArr[0][0], xsortedArr[-1][0]):
    if i % 2 == 0:
        xSpaces.append(i)

for i in range(ysortedArr[0][0], ysortedArr[-1][0]):
    if i % 2 == 0:
        ySpaces.append(i)

ans = sys.maxsize

for x in xSpaces:
    for y in ySpaces:
        a = 0
        b = 0
        c = 0
        d = 0
        for point in arr:
            if point[0] > x and point[1] > y:
                a += 1
            elif point[0] > x and point[1] < y:
                b += 1
            elif point[0] < x and point[1] > y:
                c += 1
            elif point[0] < x and point[1] < y:
                d += 1

        ans = min(ans, max(a,b,c,d))

print(ans)
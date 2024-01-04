import sys

N, R = map(int, input().split())
arr = []
ans = sys.maxsize

for _ in range(N):
    arr.append(list(map(int, input().split())))


for i in range(N):
    for j in range(N):
        a = 0
        b = 0
        c = 0
        d = 0
        for point in arr:
            if point[0] > arr[i][0]+1 and point[1] > arr[j][1]+1:
                a += 1
            elif point[0] > arr[i][0]+1 and point[1] < arr[j][1]+1:
                b += 1
            elif point[0] < arr[i][0]+1 and point[1] > arr[j][1]+1:
                c += 1
            elif point[0] < arr[i][0]+1 and point[1] < arr[j][1]+1:
                d += 1

        ans = min(ans, max(a,b,c,d))

print(ans)
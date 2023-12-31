import sys

N, R = map(int, input().split())
arr = []
ans = sys.maxsize

for _ in range(N):
    arr.append(list(map(int, input().split())))

for x in range(2, R, 2):
    for y in range(2, R, 2):
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
import sys

n = int(input())
arr = list(map(int, input().split()))

ans = sys.maxsize

for i in range(n):
    distance = 0
    for j in range(n):
        distance += arr[j] * abs(i-j)
    ans = min(ans, distance)

print(ans)
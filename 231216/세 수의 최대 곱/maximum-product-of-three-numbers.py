n = int(input())
arr = list(map(int, input().split()))
ans = 0

for i in range(n-2):
    for j in range(i+1,n-1):
        for k in range(j+1,n):
            ans = max(ans, arr[i] * arr[j] * arr[k])

print(ans)
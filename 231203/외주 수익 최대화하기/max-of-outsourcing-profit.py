n = int(input())
arr = []
for _ in range(n):
    arr.append(list(map(int,input().split())))

ans = 0

def dfs(day, income):
    global ans

    if day > n :
        return
    elif day == n :
        ans = max(ans, income)
        return

    dfs(day+1, income)
    dfs(day + arr[day][0], income + arr[day][1])

dfs(0, 0)

print(ans)
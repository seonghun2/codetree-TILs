n = int(input())
arr = []
for _ in range(n):
    arr.append(list(map(int,input().split())))

arr.sort(key = lambda x : -x[1])
ans = 0

for i in range(n):
    time = arr[i][0]
    pay = arr[i][1]
    for j in range(i+1, n):
        if time + arr[j][1] > n:
            break
        else:
            time += arr[j][1]
            pay += arr[j][0]
    ans = max(ans, pay)

print(ans)
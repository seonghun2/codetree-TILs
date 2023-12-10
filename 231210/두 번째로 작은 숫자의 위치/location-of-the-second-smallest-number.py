n = int(input())
arr = list(map(int, input().split()))
second_num = 0
sorted_arr = sorted(arr)
ans = 0
for i in sorted_arr:
    if i > min(arr):
        second_num = i
        break

for i in range(n):
    if arr[i] == second_num:
        
        if ans != 0:
            ans = -1
            break
        ans = i+1

if n==1:
    ans = -1

print(ans)
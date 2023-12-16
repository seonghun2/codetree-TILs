arr = []
for _ in range(10):
    arr.append(list(input()))

L = ()
B = ()

for i in range(10):
    for j in range(10):
        if arr[i][j] == 'B':
            B = (i,j)
        if arr[i][j] == 'L':
            L = (i,j)

ans = abs(L[0] - B[0]) + abs(L[1] - B[1]) - 1
print(ans)
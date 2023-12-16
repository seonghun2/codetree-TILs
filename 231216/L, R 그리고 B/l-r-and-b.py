arr = []
for _ in range(10):
    arr.append(list(input()))

L = ()
B = ()
R = ()

for i in range(10):
    for j in range(10):
        if arr[i][j] == 'B':
            B = (i,j)
        if arr[i][j] == 'L':
            L = (i,j)
        if arr[i][j] == 'R':
            R = (i,j)

if L[0] == R[0] and R[0] == B[0] and R[1] > min(L[1],B[1]) and R[1] < max(L[1],B[1]):
    ans = abs(L[0] - B[0]) + abs(L[1] - B[1]) + 1
elif L[1] == R[1] and R[1] == B[1] and R[0] > min(L[0],B[0]) and R[0] < max(L[0],B[0]):
    ans = abs(L[0] - B[0]) + abs(L[1] - B[1]) + 1
else:
    ans = abs(L[0] - B[0]) + abs(L[1] - B[1]) - 1
print(ans)
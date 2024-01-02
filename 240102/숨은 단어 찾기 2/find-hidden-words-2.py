N, M = map(int, input().split())

arr = []
for _ in range(N):
    arr.append(list(input()))

dir = [(0,-1), (-1,-1), (-1,0), (-1,1), (0,1), (1,1), (1,0), (1,-1)]
ans = 0
for i in range(N):
    for j in range(M):
        if arr[i][j] == 'L':
            for d in dir:
                x = i
                y = j
                dx = d[0]
                dy = d[1]
                curStr = 'L'
                for _ in range(2):
                    x += dx
                    y += dy
                    if (x >= 0 and x < N) and (y >= 0 and y < M):
                        curStr += arr[x][y]
                if curStr == 'LEE':
                    ans += 1

print(ans)
K, N = map(int, input().split())

arr = []

def makeNum(cur):
    if cur > N:
        print(*arr)
        return
    
    for i in range(1, K+1):
        arr.append(i)
        makeNum(cur+1)
        arr.pop()

makeNum(1)
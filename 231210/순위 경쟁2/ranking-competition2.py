n = int(input())

point_A = 0
point_B = 0
currentWinner = "AB"
ans = 0

for _ in range(n):
    c, s = input().split()
    s = int(s)
    newWinner = ""
    if c == "A":
        point_A += s
    else:
        point_B += s
    
    if point_A > point_B:
        newWinner = "A"
    elif point_B > point_A:
        newWinner = "B"
    else:
        newWinner = "AB"

    if currentWinner != newWinner:
        ans += 1

    currentWinner = newWinner

print(ans)
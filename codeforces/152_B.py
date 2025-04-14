n,m = map(int, input().split())
xc, yc = map(int, input().split())
k = int(input())
ans = 0
for _ in range(k):
    x,y = map(int, input().split())
    dx = 0
    steps = 0
    if x > 0:
        dx = (n - xc) // x
    if x < 0:
        dx = (1 - xc) // x
    if y > 0:
        dy = (n - yc) // y
    if y < 0:
        dy = (1 - yc) // y
    if x == 0:
        steps = dy
    elif y == 0:
        steps = dx
    else:
        steps = min(dx, dy)
    ans += steps
    xc += 0 if x == 0 else steps * x
    yc += 0 if y == 0 else steps * y
print(ans)


        
    
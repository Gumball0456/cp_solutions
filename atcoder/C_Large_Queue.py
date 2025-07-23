from bisect import bisect_left

n = int(input())
c1,c2,c3 = [0], [0],[0]
remsum = 0
total = 0

for _ in range(n):
    t = [*map(int,input().split())]

    if t[0] == 1:
        c1.append(t[2])
        c2.append(t[1] + c2[-1])
        c3.append(t[1] * t[2] + c3[-1])
    else:
        total += t[1]
        idx = bisect_left(c2,total)
        ans = c1[idx] * (total - c2[idx-1]) - remsum + c3[idx-1]
        remsum += ans
        print(ans)
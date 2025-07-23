tc = int(input())
for _ in range(tc):
    n,l,r = map(int, input().split())
    arr = [*map(int, input().split())]
    left = sorted(arr[:r])
    right = sorted(arr[l - 1:])
    ans = min(sum(left[:r-l+1]), sum(right[:r-l+1]))
    print(ans)
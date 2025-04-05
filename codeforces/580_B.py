n, d = map(int, input().split())
arr = []
for i in range(n):
    a, b = map(int, input().split());
    arr.append((a,b))
arr.sort()

l = 0
ans = 0
curr_sum = 0
for r in range(n):
    curr_sum += arr[r][1];
    while(arr[r][0] - arr[l][0] >= d):
        curr_sum -= arr[l][1]
        l += 1
    ans = max(ans, curr_sum)
print(ans)
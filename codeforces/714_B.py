n = int(input())
arr = [*map(int, input().split())]
arr = set(arr)
 
if len(arr) > 3:
    print("NO")
if len(arr) < 3:
    print("YES")
if len(arr) == 3:
    arr = list(arr)
    arr.sort()
    if abs(arr[1] - arr[0]) == abs(arr[2] - arr[1]):
        print("YES")
    else:
        print("NO")
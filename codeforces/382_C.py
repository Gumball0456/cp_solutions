n = int(input())
if n == 1:
    print(-1)
    exit
else:
    arr = [*map(int, input().split())]
    arr.sort();
    ans = set();
    freq = {};
    for i in range(1, n):
        if arr[i] - arr[i-1] not in freq:
            freq[arr[i] - arr[i-1]] = 1
        else:
            freq[arr[i] - arr[i-1]] += 1


    if len(freq) == 1:
        ans.add(arr[0] - arr[1] + arr[0]);
        if n == 2 and (arr[1] - arr[0]) % 2 == 0:
            ans.add(arr[0] + (arr[1] - arr[0]) / 2);
        
        ans.add(arr[n-1] + (arr[1] - arr[0]));
    if len(freq) == 2:
        freq = list(freq.items())
        freq.sort()
        if freq[1][1] == 1:
            for i in range(1, n):
                if arr[i] - arr[i-1] == freq[1][0] and (arr[i] - arr[i-1]) % 2 == 0 and (arr[i] - arr[i-1]) / 2 == freq[0][0]:
                    ans.add((arr[i] + arr[i-1]) / 2);
                    break;

    ans = [*map(int, ans)]
    ans = [*map(str, ans)]
    print(len(ans));
    print(" ".join(ans));
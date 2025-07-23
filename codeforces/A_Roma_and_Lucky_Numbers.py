n, k = map(int, input().split())
arr = input().split()

invalid = 0
for s in arr:
    counter = 0
    for char in s:
        if char == '4' or char == '7':
            counter += 1

    if counter > k:
        invalid += 1

print(n - invalid)
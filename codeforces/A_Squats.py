n = int(input())
s = input()
ans = n // 2 - (min(s.count('x'), s.count('X')))
print(ans)
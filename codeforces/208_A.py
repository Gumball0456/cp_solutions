s = input()
s = s.split("WUB")
ans = ''
for w in s:
    if(w == ''): continue
    ans += w + ' '
print(ans.strip())
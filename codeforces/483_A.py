import math
l,r = map(int, input().split())
a = 0
b = 0
c = 0
found = False
for i in range(l,r+1):
    for j in range(i, r+1):
        if(math.gcd(i,j) == 1):
            for k in range(j, r+1):
                if(math.gcd(j,k) == 1 and math.gcd(i,k) > 1 and not found):
                    a = i
                    b = j
                    c = k
                    found = True

if a != 0:
    print(a,b,c)
else:
    print(-1)

i = 9000000000000000010
j = i + 1
k = j + 1
if(math.gcd(j,k) == 1 and math.gcd(i,k) > 1 ):
    print(i,k,k)
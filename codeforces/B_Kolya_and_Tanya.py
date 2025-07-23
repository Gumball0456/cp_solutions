n = int(input())
mod = 1**9 - 7
ans = pow(3, n * 3, mod) - pow(7, n, mod) + mod
print(ans % mod)
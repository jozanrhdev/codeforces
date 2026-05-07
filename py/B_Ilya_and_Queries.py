# s = input()
# dp = [0]

# for i in range(len(s) - 1):
#   dp += dp[i] + (s[i] == s[i + 1]),
#   # a, b = map(int, input().split())
#   # answers = {'{a}-{b}': 0}

#   # i = ans = 0

#   # for i in range(a - 1, b):
#   #   if i + 1 < b and s[i] == s[i + 1]:
#   #     ans += 1

#   # print(ans)

# for _ in [0] * int(input()):
#   x, y = map(int, input().split())
#   print(dp[y - 1] - dp[x - 1])a
dp = [0]

print(dp)
dp += [1]

print(dp)
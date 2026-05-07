import math 

n = int(input())

for _ in range(n):
  a, b = map(int, input().split())

  print(b + (b - 1) // (a - 1))

  # ans = 1
  # for i in range(b):
  #   if i % (a) == 0:
  #     ans += 1
  #   ans += 1
  # print(ans)
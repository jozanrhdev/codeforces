import math

t = int(input())

for i in range(t):
  n = int(input())

  arr = [*map(int, input().split())]

  sm = sum(arr)
  cp = math.sqrt(sm)
  sq = float(int(cp))
  # print(cp, sq)
  print(["NO", "YES"][sq == cp])

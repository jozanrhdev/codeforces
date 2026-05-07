import math

n = int(input())

for _ in range(n):
  a, b, c = map(int, input().split())

  if a + b >= 10 or b + c >= 10 or c + a >= 10:
    print("YES")
  else:
    print("NO")
n = int(input())

for _ in range(n):
  a, b = map(int, input().split())

  c = a
  # 3 11
  # (5 - 3) + (11 - 5) = 2 + 6 = 8
  # (6 - 3) + (11 - 6) = 3 + 5 = 8
  # (7 - 3) + (11 - 7) = 4 + 4 = 8
  # (8 - 3) + (11 - 8) = 5 + 3 = 6

  print((c - a) + (b - c))
t = int(input())

for i in range(t):
  n = int(input())

  # print([n // 2, n // 2 + 1][n % 2])
  if n % 4 == 0:
    print(n // 4)
  else:
    m = n % 4
    print(n // 4 + m // 2)
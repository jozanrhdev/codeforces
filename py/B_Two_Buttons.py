n, m = map(int, input().split())

c = n
while m > n:
  m = [m // 2, m + 1][m % 2]
  # print(c)
  # if m % 2 == 0:
    # print(m)
    # m //= 2
  # else:
    # m += 1
  c += 1

# print(c, m)
print(c - m)
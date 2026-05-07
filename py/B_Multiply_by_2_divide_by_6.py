t = int(input())

for _ in range(t):
  x = int(input())
    
  ans = 0
  while x != 1:
    # print(x)
    if x % 6 == 0:
      x //= 6
      ans += 1
    elif x % 3 == 0:
      x *= 2
      ans += 1
    elif x % 2 == 0:
      ans = -1
      break
    elif x % 3 != 0:
      ans = -1
      break
    
  print(ans)
  # 81 * 2 / 6 = 12
  # 27 * 2 / 6 = 9
  # 9 * 2 / 6 = 3
  # 3 * 2 / 6 = 1
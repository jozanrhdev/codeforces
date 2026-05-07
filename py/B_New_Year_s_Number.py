t = int(input())

for i in range(t):
  n = int(input())
  c = n

  ans = -1
  while ans == -1:
  
    if n % 2020 == 0 or c % 2021 == 0:
      ans = 0
    c -= 2020
    n -= 2021

    if n < 0:
      break
  
  print(["YES", "NO"][ans == -1])
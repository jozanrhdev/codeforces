import math

t = int(input())

for _ in range(t):
  n = int(input())
  one = (n // 3)
  two = (n // 3)
  # two = 1
  
  # if n % 5 == 0:
    # two = n // 3
  
  while one + (two * 2) != n:
    v1 =  abs(n - (one + 1 + two * 2))
    v2 = abs(n - (one + (two + 1) * 2))
    aprox = min(v1, v2)

    # print(v1, v2)
    # break
    if aprox == v1:
      one += 1
    else:
      two += 1
  
  print(one, two)

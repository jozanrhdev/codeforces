t = int(input())

for _ in range(t):
  n = int(input())
  w = input()

  ans = 0
  for l in w:
    if ord(l) - 96 > ans:
      ans = ord(l) - 96
  
  print(ans)
t = int(input())

for _ in range(t):
  n = int(input())
  balloons = input()

  l = ''
  ans = 0
  for i in range(n):
    if balloons[i] in l:
      ans += 1
    else:
      l += balloons[i]
      ans += 2
  
  print(ans)

t = int(input())

for i in range(t):
  n = int(input())
  a = input()
  x, y = 0, 0

  ans = 0
  for l in a:
    if l == 'U':
      y += 1
    elif l == 'D':
      y -= 1
    elif l == 'L':
      x -= 1
    else:
      x += 1
    
    if x == 1 and y == 1:
      ans = 1
      break

  print(['NO', 'YES'][ans])
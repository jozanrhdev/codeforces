t = int(input())

for _ in range(t):
  ans = ''
  for i in range(8):
    line = input()
    for j in range(8):
      if line[j] != '.':
        ans += line[j]
  
  print(ans)
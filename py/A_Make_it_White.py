t = int(input())

for _ in range(t):
  n = int(input())
  w = input()
  i = 0
  j = n - 1

  while i < j:
    if w[i] == 'W':
      i += 1
    
    if w[j] == 'W':
      j -= 1
    
    if w[i] == 'B' and w[j] == 'B':
      break

  print([j - i + 1, 0][i > j])
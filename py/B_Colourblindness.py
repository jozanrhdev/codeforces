t = int(input())

for i in range(t):
  n = int(input())
  upp = input()
  down = input()

  ans = i = 0
  for w1 in upp:
    if w1 == down[i]:
      ans += 1
    elif w1 == 'G' and down[i] == 'B' or w1 == 'B' and down[i]== 'G':
      ans += 1
    i += 1
  
  print(['NO', 'YES'][ans == n])

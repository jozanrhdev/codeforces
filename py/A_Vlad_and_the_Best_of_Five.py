t = int(input())

for _ in range(t):
  word =[*input()]
  A = 0
  B = 0

  for w in word:
    if w == 'A':
      A += 1
    else:
      B += 1
  
  if A > B:
    print("A")
  else:
    print("B")
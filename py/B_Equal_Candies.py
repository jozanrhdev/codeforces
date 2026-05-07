reader = lambda: map(int, input().split())

t = int(input())

for _ in range(t):
  n = int(input())
  boxes = [*reader()]

  minium = 2 ** 64 - 1

  for c in boxes:
    if c < minium:
      minium = c
  
  sm = 0
  for c in boxes:
    sm += (c - minium)

  print(sm)

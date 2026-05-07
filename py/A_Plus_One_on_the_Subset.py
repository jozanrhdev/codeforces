t = int(input())

for _ in range(t):
  n = int(input())
  nums = [*map(int, input().split())]

  maxium = 0
  minium = 2 ** 64 - 1
  for i in nums:
    if i > maxium:
      maxium = i
    if i < minium:
      minium = i

  print(maxium - minium)
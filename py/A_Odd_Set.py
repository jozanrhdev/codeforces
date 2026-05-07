t = int(input())

for i in range(t):
  n = int(input())

  arr = [*map(int, input().split())]

  odd = 0
  even = 0

  for a in arr:
    if a % 2 == 0:
      even += 1
    else:
      odd += 1
  
  print(["Yes", "No"][odd != even])
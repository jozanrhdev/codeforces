t = int(input())

for _ in range(t):
  n = int(input())
  arr = [*map(int, input().split())]
  cur = n * [0]
  i = j = 0

  for _ in range(n):
    cur[n-arr[i]] += 1
    i += 1
  
  ans = 0
  for _ in cur:
    if cur[j] >= 3:
      ans = -1
      print(n - j)
      break
    j += 1
  
  if ans != -1:
    print(-1)

  
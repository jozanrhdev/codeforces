t = int(input())

for _ in range(t):
  n = int(input())
  nums = [*map(int, input().split())]

  ans = i = j = 0
  for _ in range(n):
    sm = 1
    j = 0
    for _ in range(n):
      if i == j:
        j += 1
        continue
      sm *= nums[j]
      j += 1
    sm *= (nums[i] + 1)
    if sm > ans:
      ans = sm
    i += 1
  
  print(ans)
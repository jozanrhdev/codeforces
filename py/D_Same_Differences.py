# t = int(input())

for s in [*open(0)][2::2]:
  arr = s.split()
  n = len(arr)
  c = 2 * n * [0]
  # print(arr, n, c)

  for a in arr:
    c[n-int(a)] += 1
    n += 1
  
  # print(arr, n, c)
  # print(a, c)
  # print(sum(a * a - a for a in c) // 2)
  
  ans = 0

  for a in c:
    # print(a, ans)
    if a > 1:
      ans += a * a - a

  print(ans // 2)

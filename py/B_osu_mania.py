t = int(input())

for i in range(t):
  n = int(input())

  ans = [0] * n

  # print(ans)
  for j in range(n):
    line = input()
    for k in range(4):
      if line[k] == '#':
        ans[j] = k + 1
  
  ans.reverse()
  print(" ".join(map(str, ans)))
  
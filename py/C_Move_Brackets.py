t = int(input())

for _ in range(t):
  c = int(input())
  n = input()

  for _ in range(c//2):
    n = n.replace('()', '')
  
  print(len(n) // 2)

  # print((n - (ans * 2)) // 2)
      # a = 0
      # for j in range(i + 1, n):
        # if line[j] == "(":
          # a += 1
        # elif line[j] == ")":
          # a -= 1

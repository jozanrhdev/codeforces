t = int(input())

for _ in range(t):
  n = int(input())
  tasks = [*input()]
  lt = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
  cor = []
  # dic = [i for i in tasks if i in lt]
  

  # print(tasks)
  j = ''
  ans = 0
  for i in range(n):
    # print(j, i)
    if tasks[i] not in cor and tasks[i] != j:
      j = tasks[i]
      cor.append(tasks[i])
    elif tasks[i] in cor and tasks[i] == j:
      ans = 0
    else:
      ans = -1
      print("NO")
      break

  if ans == 0:
    print("YES")

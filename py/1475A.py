n = int(input())

for _ in range(n):
  a = int(input())

  if a & (a - 1):
    print("YES")
  else:
    print("NO")

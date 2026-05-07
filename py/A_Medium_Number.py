n = int(input())

for _ in range(n):
  a, b, c = map(int, input().split())

  if a > b and b > c:
    print(b)
  elif c > b and b > a:
    print(b)
  elif a > c and c > b:
    print(c)
  elif b > c and c > a:
    print(c)
  elif c > a and a > b:
    print(a)
  else:
    print(a)
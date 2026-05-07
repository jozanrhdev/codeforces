t = int(input())

for i in range(t):
  n, a, b = map(int, input().split())

  if b / 2 > float(a):
    print(n * a)
  else:
    print(n // 2 * b + n % 2 * a)
t = int(input())

for i in range(t):
  a, b, c = [*map(int, input().split())]

  if c % 2 == 0 and a > b:
    print("First")
  elif c % 2 == 0 and a <= b:
    print("Second")
  elif c % 2 != 0 and a >= b:
    print("First")
  elif c % 2 != 0 and a < b:
    print("Second")
  elif a >= b:
    print("First")
  else:
    print("Second")

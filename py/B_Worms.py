def binary_search(l, r, x, cur):
  if l > r:
    return 0
  mid = (l + r) // 2
  if cur[mid] == x:
    return mid
  elif mid - 1 >= 0 and cur[mid] > x and cur[mid - 1] < x:
    return mid
  elif cur[mid] > x:
    return binary_search(l, mid - 1, x, cur)
  else:
    return binary_search(mid + 1, r, x, cur)

n = int(input())
worms = [*map(int, input().split())]
m = int(input())
juicy = [*map(int, input().split())]

cur = []
sm = 0
for w in worms:
  sm = w + sm
  cur.append(sm)

for j in juicy:
  ans = binary_search(0, len(cur) - 1, j, cur)
  print(ans + 1)

n, m = map(int, input().split())
a = [0] + list(map(int, input().split()))
G = [[] for i in range(n + 1)]
G[1] = [0]

for _ in range(n - 1):
  x, y = map(int, input().split())
  G[x].append(y)
  G[y].append(x)

q = [(0, 1, a[1])]

ans = 0

while q:
  p, x, y = q.pop()
  if y > m:
    continue

  G[x].remove(p)

  for c in G[x]:
    q.append((x, c, y + a[c] if a[c] else 0))
  ans += not G[x]

print(ans)
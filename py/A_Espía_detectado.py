from collections import Counter

n = int(input())

for _ in range(n):
  m = int(input())

  mp = list(map(int, input().split()))
  # print(list)

  moda = Counter(mp).most_common(1)[0][0]

  for i in range(m):
    if mp[i] != moda:
      print(i + 1)
      continue

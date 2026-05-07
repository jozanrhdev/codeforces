t = int(input())

for _ in range(t):
  s = input()
  n = int(len(s)/2)
  if len(s) % 2 == 1:
    print("NO")
    continue
  if s[:n] == s[n:n*2]:
    print("YES")
  else:
    print("NO")
t = int(input())

for _ in range(t):
  s1, s2, s3, s4 = map(int, input().split())
  o1 = 0
  o2 = 0
  f1 = max(s1, s2)
  if f1 == s1:
    o1 = s2
  else:
    o1 = s1
  f2 = max(s3, s4)
  if f2 == s3:
    o2 = s4
  else:
    o2 = s3

  if f1 <= o1 or f1 <= o2 or f2 <= o1 or f2 <= o2:
    print("NO")
  else:
    print("YES")

t = int(input())

reader = lambda: map(int, input().split())

for _ in range(t):
  n, k = reader()
  nums = [*reader()]

  if k in nums:
    print("YES")
  else:
    print("NO")
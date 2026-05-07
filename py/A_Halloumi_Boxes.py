reader = lambda: map(int, input().split())
t = int(input())

for _ in range(t):
  n, k = reader()
  arr = [*reader()]
  sorted_arr = sorted(arr)

  if sorted_arr == arr:
    print("YES")
    continue

  print(["NO", "YES"][k >= 2])

  # print(sorted_arr)


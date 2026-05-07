t = int(input())

for _ in range(t):
  n, x = map(int, input().split())
  arr = [*map(int, input().split())]
  arr.insert(0, 0)
  arr += [x]
  ans = 0

  for i in range(1, n + 1):
    if arr[i] - arr[i - 1] > ans:
      ans = arr[i] - arr[i - 1]
    
    i += 1

  w = 2 * (arr[len(arr) - 1] - arr[len(arr) - 2])
  print([w, ans][ans > w])

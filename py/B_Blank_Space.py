read = lambda: map(int, input().split())
n = int(input())

for _ in range(n):
  n = int(input())
  array = [*read()]

  ans = count = 0
  # print(array)
  for arr in array:
    count += 1
    # print(arr)
    if arr == 1:
      count = 0 
    # print(arr, count)
    if count > ans:
      ans = count
  print(ans)
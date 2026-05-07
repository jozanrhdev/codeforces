reader = lambda: map(int, input().split())
t = int(input())

for _ in range(t):
  n = int(input())
  nums = [*reader()]
  sorted_nums = sorted(nums)

  # print(sorted_nums)
  cp = ans = 0
  for num in sorted_nums:
    if num > cp:
      cp = num
    else:
      ans = -1
      print("NO")
      break
  
  if ans != -1:
    print("YES")
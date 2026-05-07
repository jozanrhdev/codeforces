read = lambda: map(int, input().split())
t = int(input())

for _ in range(t):
  n = int(input())
  numbers = [*read()]

  odd = 0
  # even = 0
  for i in numbers:
    if i % 2 != 0:
      odd += 1
    # else:
      # odd += 1
  
  if odd % 2 == 0:
    print("YES")
  else:
    print("NO")
# [1, 2, 2, 3, 3, 4, 4, 5]
# [3, 8, 9]
# [1, 2, 3, 4, 5]
# [1, 2, 3, 4]
# 1 % 2 = 1
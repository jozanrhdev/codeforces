t = int(input())

for _ in range(t):
  n = int(input()) 
  word = set(input())
  # print(word)

  if n != 5:
    print("NO")
    continue

  ans = 0
  for i in word:
    if i in "Timur":
      ans += 1

  if ans == 5:
    print("YES")
  else:
    print("NO")

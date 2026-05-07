n = int(input())

for _ in range(n):
  word = input()
  codeforces = 'codeforces'

  ans = 0
  for i in range(len(word)):
    if word[i] != codeforces[i]:
      ans += 1
  
  print(ans)
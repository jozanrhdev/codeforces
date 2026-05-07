t = int(input())

for _ in range(t):
  n = int(input())
  w = input()

  i = ans = 0
  j = n - 1
  for _ in w:
    if (w[i] == '0' and w[j] == '1') or (w[i] == '1' and w[j] == '0'):
      ans += 1
      i += 1
      j -= 1

    if i >= j:
      break
  
  # print(w + " " +  str(ans))
  print(len(w) - (ans * 2))
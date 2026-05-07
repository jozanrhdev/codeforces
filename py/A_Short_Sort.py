n = int(input())

for _ in range(n):
  L = input()
  correct = 'abc'
  
  # if L == correct:
  #   print("YES")
  # elif L[1] + L[0] + L[2]  == correct:
  #   print("YES")
  # elif L[0] + L[2] + L[1] == correct:
  #   print('YES')
  # elif L[2] + L[1] + L[0] == correct:
  #   print('YES')
  # else:
  #   print("NO")
  
  if L[0] == 'a' or L[1] == "b" or L[2] == "c":
    print("YES")
  else:
    print("NO")

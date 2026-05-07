num = input()
ans = ""

for i in range(len(num)):
  if 9 - int(num[i]) < int(num[i]):
    if i == 0 and str(9 - int(num[i])) == "0":
      ans += str(num[i])
      continue
    ans += str(9 - int(num[i]))
  else:
    ans += str(num[i])
  
print(ans)
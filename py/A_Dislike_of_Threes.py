# n = int(input())

# def f(x):
#   ticket = [int(num) for num in x]

#   return ticket[len(ticket) - 1] == 3

# for _ in range(n):
#   x = int(input())

#   ans, count = 0, 0
#   # while ans % 3 == 0 or f(list(str(ans))) and count != x:
#   for _ in range(x):
#     while ans % 3 == 0 or f(list(str(ans))):
#       ans += 1
#     ans += 1

#   print(ans - 1)


for s in[*open(0)][1:]:
  r=i=0
  while i<int(s):r+=1;i+=r%10!=3and r%3>0
  print(r)
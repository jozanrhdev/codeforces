n = int(input())

for _ in range(n):
  ticket = list(input())

  ticket = [int(x) for x in ticket]

  if ticket[0] + ticket[1] + ticket[2] == ticket[3] + ticket[4] + ticket[5]:
    print("YES")
  else:
    print("NO")
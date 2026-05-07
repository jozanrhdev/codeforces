n, t = map(int, input().split())

i2 = (n ) * [0]

i2[0] = 1

x = int("".join(str(x) for x in i2))

# print(x)
while x % t != 0 and x != -1:
  x += 1
  # print(x)
  
  digits = [int(digit) for digit in str(x)]
  if len(digits) > n:
    x = -1

print(x)


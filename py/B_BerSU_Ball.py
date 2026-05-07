n = int(input())
a = [*map(int, input().split())]

m = int(input())
b = [*map(int, input().split())]

c = [*a, *b]

sorted_a = sorted(a)
sorted_b = sorted(b)

# a = 1 2 4 6 
# b = 1 5 5 7 9
# pairs difference not max with 1
# [1, 1], [4, 5], [5, 6]
# answer = 3

# ans = i = 0
# for _ in sorted_c:
#   if i + 1 <= len(sorted_c) - 1 and sorted_c[i + 1] - sorted_c[i] <= 1:
#     ans += 1
#     i += 2
#   i += 1

i = j = ans = 0
# c = -1
# bt = [*sorted_b]
# # print(bt)
# for _ in range(len(sorted_a)):
#   j = 0
#   for _ in range(len(bt)):
#     if abs(bt[j] - sorted_a[i]) <= 1:
#       ans += 1
#       c = j
#       break
#     j += 1
#   if c != -1:
#     bt.pop(c)
#   c = -1
#   i += 1

while i < n and j < m:
  if abs(sorted_b[j] - sorted_a[i]) < 2:
    ans += 1
    i += 1
    j += 1
  elif a[i] < b[j]:
    i += 1
  else:
    j += 1
      
print(ans)
  

# print(ans)
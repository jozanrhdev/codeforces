read = lambda: map(int, input().split())
n, m = read()
books = [*read()]

p = j = 0
for i in books:
  p += i
  # print(p)
  if p > m:
    p -= books[j]
    j += 1

print(n - j)

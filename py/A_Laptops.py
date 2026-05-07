n = int(input())
dict = n * [{"price": 0, "quality": 0}]

for i in range(n):
  a, b = map(int, input().split())
  dict[i] = {"price": a, "quality": b}  


# order by minor price:
dict = sorted(dict, key=lambda x: x["price"])


ans = -1
for i in range(1, n):
  if dict[i]["quality"] < dict[i - 1]["quality"] and dict[i]["price"] > dict[i - 1]["price"]:
    ans = 0
    print("Happy Alex")
    break
  
if ans == -1:
  print("Poor Alex")

a="Poor"
for i in range(int(input())):
  b,c=input().split()
  if b!=c:a="Happy"
print(a,"Alex")
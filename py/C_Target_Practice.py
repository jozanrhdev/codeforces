t = int(input())

for i in range(t):
  # input 10 x 10
  # arr = []
  sm = 0
  for i in range(10):
    line = input()
    for j in range(10):
      if line[j] == 'X':
        v1 = min(i, j)
        v2 = min(9 - i, 9 - j)
        minium = min(v1, v2)
        sm += (minium + 1)
        # arr.append([i, j])
  
  # print(arr)
  # for a in arr:
    # v1 = min(a[0], a[1])
    # v2 = min(9 - a[0], 9 - a[1])
    # minium = min(v1, v2)
    # sm += (minium + 1)
    # print(sm)
  print(sm)
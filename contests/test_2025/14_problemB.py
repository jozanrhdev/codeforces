n, x0 = map(int, input().split())
lefts = []
rights = []

for _ in range(n):
    a, b = map(int, input().split())
    left = min(a, b)
    right = max(a, b)
    lefts.append(left)
    rights.append(right)

L = max(lefts)
R = min(rights)

if L > R:
    print(-1)
else:
    if x0 < L:
        print(L - x0)
    elif x0 > R:
        print(x0 - R)
    else:
        print(0)
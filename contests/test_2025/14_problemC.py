segments = []
for _ in range(4):
    x1, y1, x2, y2 = map(int, input().split())
    if x1 == x2 and y1 == y2:
        print("NO")
        exit()
    if y1 == y2:
        segments.append(('h', x1, y1, x2, y2))
    elif x1 == x2:
        segments.append(('v', x1, y1, x2, y2))
    else:
        print("NO")
        exit()

h_count = sum(1 for s in segments if s[0] == 'h')
if h_count != 2:
    print("NO")
    exit()

h_ys = []
v_xs = []
for s in segments:
    if s[0] == 'h':
        h_ys.append(s[2])
    else:
        v_xs.append(s[1])

if len(set(h_ys)) != 2:
    print("NO")
    exit()
y_min, y_max = min(h_ys), max(h_ys)

if len(set(v_xs)) != 2:
    print("NO")
    exit()
x_min, x_max = min(v_xs), max(v_xs)

for s in segments:
    type_, x1, y1, x2, y2 = s
    if type_ == 'h':
        if y1 not in (y_min, y_max):
            print("NO")
            exit()
        min_x = min(x1, x2)
        max_x = max(x1, x2)
        if min_x != x_min or max_x != x_max:
            print("NO")
            exit()
    else:
        if x1 not in (x_min, x_max):
            print("NO")
            exit()
        min_y = min(y1, y2)
        max_y = max(y1, y2)
        if min_y != y_min or max_y != y_max:
            print("NO")
            exit()

print("YES")
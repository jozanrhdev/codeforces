n, t = map(int, input().split())

if 2 * t - 1 > n - 2:
    print(0)
else:
    from collections import defaultdict

    dp_prev = defaultdict(int)
    for y in range(1, 5):
        dp_prev[(y, None, 0, 0)] = 1

    for i in range(2, n + 1):
        dp_current = defaultdict(int)
        for state, count in dp_prev.items():
            prev_y, prev_dir, p, v = state
            for next_y in range(1, 5):
                if next_y == prev_y:
                    continue
                new_dir = 'up' if next_y > prev_y else 'down'
                new_p = p
                new_v = v
                j = i - 1
                if 2 <= j <= n - 1:
                    if prev_dir == 'up' and new_dir == 'down':
                        new_p += 1
                    elif prev_dir == 'down' and new_dir == 'up':
                        new_v += 1
                    if new_p > t or new_v > t - 1:
                        continue
                new_state = (next_y, new_dir, new_p, new_v)
                dp_current[new_state] += count
        dp_prev = dp_current

    result = 0
    for state, count in dp_prev.items():
        _, _, p, v = state
        if p == t and v == t - 1:
            result += count
    print(result)
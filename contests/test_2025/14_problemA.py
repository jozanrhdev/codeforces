n, m = map(int, input().split())
grid = [input().strip() for _ in range(n)]

min_row = n
max_row = -1
min_col = m
max_col = -1

for i in range(n):
    for j in range(m):
        if grid[i][j] == '*':
            if i < min_row:
                min_row = i
            if i > max_row:
                max_row = i
            if j < min_col:
                min_col = j
            if j > max_col:
                max_col = j

for i in range(min_row, max_row + 1):
    print(grid[i][min_col : max_col + 1])
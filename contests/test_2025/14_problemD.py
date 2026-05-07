import sys
from collections import deque, defaultdict

n = int(sys.stdin.readline())
adj = defaultdict(list)
edges = []
for _ in range(n - 1):
    u, v = map(int, sys.stdin.readline().split())
    adj[u].append(v)
    adj[v].append(u)
    edges.append((u, v))

global_max = 0

# Process edge splits
for u, v in edges:
    # Split into part1 (u's side) and part2 (v's side)
    part1 = set()
    q = deque([u])
    part1.add(u)
    while q:
        node = q.popleft()
        for neighbor in adj[node]:
            if (node == u and neighbor == v) or (node == v and neighbor == u):
                continue
            if neighbor not in part1:
                part1.add(neighbor)
                q.append(neighbor)
    part2 = set(range(1, n + 1)) - part1

    def compute_diameter(nodes):
        if not nodes:
            return 0
        adj_part = defaultdict(list)
        for node in nodes:
            for neighbor in adj[node]:
                if neighbor in nodes:
                    adj_part[node].append(neighbor)
        def bfs(start):
            visited = {start: 0}
            q = deque([start])
            while q:
                current = q.popleft()
                for neighbor in adj_part[current]:
                    if neighbor not in visited:
                        visited[neighbor] = visited[current] + 1
                        q.append(neighbor)
            max_dist = max(visited.values(), default=0)
            far_node = max(visited, key=lambda k: visited[k], default=start)
            return far_node, max_dist
        start_node = next(iter(nodes))
        far_node, _ = bfs(start_node)
        _, diameter = bfs(far_node)
        return diameter

    dia1 = compute_diameter(part1)
    dia2 = compute_diameter(part2)
    product = dia1 * dia2
    if product > global_max:
        global_max = product

# Process node-based approach
child_info = defaultdict(list)

def dfs(u, parent):
    max_depth = 0
    max_dia = 0
    children = []
    for v in adj[u]:
        if v == parent:
            continue
        child_depth, child_dia = dfs(v, parent=u)
        children.append((v, child_depth, child_dia))
        current_depth = child_depth + 1
        if current_depth > max_depth:
            max_depth = current_depth
        if child_dia > max_dia:
            max_dia = child_dia
    # Check path through u connecting two children
    depths = sorted([cd for _, cd, _ in children], reverse=True)
    if len(depths) >= 2:
        candidate_dia = depths[0] + depths[1] + 2
        if candidate_dia > max_dia:
            max_dia = candidate_dia
    child_info[u] = children
    return (max_depth, max_dia)

# Perform DFS from root 1 (any root would work)
dfs(1, parent=-1)

# Now process each node's children pairs
for u in child_info:
    children = child_info[u]
    for i in range(len(children)):
        v1, d1, dia1 = children[i]
        for j in range(i + 1, len(children)):
            v2, d2, dia2 = children[j]
            product = max(
                dia1 * dia2,
                dia1 * d2,
                d1 * dia2,
                d1 * d2
            )
            if product > global_max:
                global_max = product

print(global_max)
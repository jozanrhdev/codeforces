import sys
import math
import bisect
from collections import defaultdict, Counter, deque
from itertools import permutations, combinations
from functools import lru_cache

input  = sys.stdin.readline
inputs = sys.stdin.read

# ─── LECTURA RÁPIDA
def ri():   return int(input())
def rl():   return list(map(int, input().split()))
def rs():   return input().strip()
def rls():  return input().split()

# ─── CONSTANTES
MOD  = int(1e9) + 7
INF  = float('inf')
NINF = float('-inf')

# ─── UTILS MATEMÁTICOS
def gcd(a, b):       return math.gcd(a, b)
def lcm(a, b):       return a * b // math.gcd(a, b)
def pw(b, e, m=MOD): return pow(b, e, m)

def is_prime(n):
    if n < 2: return False
    if n == 2: return True
    if n % 2 == 0: return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0: return False
    return True

def criba(n):
    primo = [True] * (n + 1)
    primo[0] = primo[1] = False
    for i in range(2, int(n**0.5) + 1):
        if primo[i]:
            for j in range(i*i, n + 1, i):
                primo[j] = False
    return primo

def factores_primos(n):
    factores = {}
    d = 2
    while d * d <= n:
        while n % d == 0:
            factores[d] = factores.get(d, 0) + 1
            n //= d
        d += 1
    if n > 1: factores[n] = factores.get(n, 0) + 1
    return factores

# ─── DSU
class DSU:
    def __init__(self, n):
        self.p  = list(range(n))
        self.sz = [1] * n
    def find(self, x):
        while self.p[x] != x:
            self.p[x] = self.p[self.p[x]]
            x = self.p[x]
        return x
    def union(self, x, y):
        x, y = self.find(x), self.find(y)
        if x == y: return False
        if self.sz[x] < self.sz[y]: x, y = y, x
        self.p[y] = x; self.sz[x] += self.sz[y]
        return True

# ─── BÚSQUEDA BINARIA
def lower_bound(a, x): return bisect.bisect_left(a, x)
def upper_bound(a, x): return bisect.bisect_right(a, x)

# ─── SOLVE
def solve():
    n = ri()
    # escribe la solución aquí
    print(n)

# ─── MAIN
if __name__ == '__main__':
    t = ri()
    for _ in range(t):
        solve()

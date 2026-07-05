#include <bits/stdc++.h>

using namespace std;

// ─── DEBUG (compilar con -DKILLBUG para activar)
template <typename A, typename B>

string to_string(pair<A, B> p);
template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto& x : v) {
    if (!first) res += ", ";
    first = false;
    res += to_string(x);
  }
  return res + "}";
}
string to_string(const string& s) { return '"' + s + '"'; }
string to_string(bool b) { return b ? "true" : "false"; }
template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
void debug_out() { cerr << "\n"; }
template <typename H, typename... T>
void debug_out(H h, T... t) {
  cerr << " " << to_string(h);
  debug_out(t...);
}
#ifdef KILLBUG
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

// ─── TIPOS
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vst = vector<string>;

// ─── MACROS
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sortA(x) sort(all(x))
#define sortD(x) sort((x).rbegin(), (x).rend())
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define FORI(i, a, b) for (int i = (a); i < (b); ++i)
#define EACH(x, v) for (auto& x : v)
#define mem0(a) memset(a, 0, sizeof(a))
#define mem1(a) memset(a, -1, sizeof(a))

// ─── CONSTANTES
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int INFi = 1e9;
const ld PI = acos((ld)-1);

// ─── I/O
#define FASTIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0)
#define yes cout << "YES\n"
#define no cout << "NO\n"

// ─── UTILS
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll pw(ll b, ll e, ll m = MOD) {
  ll r = 1;
  b %= m;
  while (e > 0) {
    if (e & 1) r = r * b % m;
    b = b * b % m;
    e >>= 1;
  }
  return r;
}
bool isPrime(ll n) {
  if (n < 2) return false;
  for (ll i = 2; i * i <= n; i++)
    if (n % i == 0) return false;
  return true;
}

template <typename T>
void printv(const vector<T>& v) {
  for (int i = 0; i < (int)v.size(); i++)
    cout << v[i] << " \n"[i + 1 == (int)v.size()];
}
// ─── STRUCT
struct Node {
  int paired, open, close;
};

const int MAXN = 1000005;
Node tree[4 * MAXN];
string s;
// x -> 2 * x, 2 * x + 1

Node merge(Node left, Node right) {
  Node parent;
  int P = min(left.open, right.close);

  parent.paired = left.paired + right.paired + P;
  parent.open = left.open + right.open - P;
  parent.close = left.close + right.close - P;

  return parent;
}

void build(int node, int l, int r) {
  if (l == r) {
    tree[node].paired = 0;
    tree[node].open = (s[l] == '(');
    tree[node].close = (s[l] == ')');
    return;
  }

  int mid = (l + r) / 2;
  build(2 * node, l, mid);
  build(2 * node + 1, mid + 1, r);

  tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
}

Node query(int node, int l, int r, int ql, int qr) {
  if (qr < l || r < ql) return {0, 0, 0};
  if (ql <= l && r <= qr) return tree[node];

  int mid = (l + r) / 2;
  Node left = query(2 * node, l, mid, ql, qr);
  Node right = query(2 * node + 1, mid + 1, r, ql, qr);

  return merge(left, right);
}

// ─── SOLVE

void solve() {
  cin >> s;
  int n = s.size();

  build(1, 0, n - 1);

  int m;
  cin >> m;
  while (m--) {
    int l, r;
    cin >> l >> r;
    l--; r--;
    Node ans = query(1, 0, n - 1, l, r);
    cout << 2 * ans.paired << '\n';
  }
}

int main() {
  FASTIO;
  solve();
  return 0;
}

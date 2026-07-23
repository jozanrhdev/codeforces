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
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
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

void update(string* s, int l, int r) {
  for (; l <= r; ++l) {
    (*s)[l] = (((*s)[l] - '0') ^ 1) + '0';
  }
}

vector<pii> ranges(string s, char c) {
  vector<pii> new_ranges;
  int n = s.size(), l = -1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == c) {
      if (l == -1) l = i;
    } else {
      if (l != -1) {
        new_ranges.pb(make_pair(l,  i - 1));
        l = -1;
      }
    }
  }
  if (l != -1) {
    new_ranges.pb(make_pair(l, n - 1));
  }

  return new_ranges;
}

// ─── SOLVE
void solve() {
  int n, q; cin >> n;
  string s;
  vll a(n + 1), pref(n + 1, 0);

  FORI(i, 1, n + 1) {
    cin >> a[i];
    pref[i] = a[i] ^ pref[i - 1];
  }
  cin >> s;

  ll x0 = 0, x1 = 0;
  FOR(i, n) {
    if (s[i] == '0') x0 ^= a[i + 1];
    else x1 ^= a[i + 1];
  }

  cin >> q;
  FOR(i, q) {
    int tp; cin >> tp;
    if (tp == 1) {
      int l, r; cin >> l >> r;
      ll S = pref[r] ^ pref[l - 1];
      x0 ^= S;
      x1 ^= S;
    } else {
      int g; cin >> g;
      cout << (g == 0 ? x0 : x1) << ' ';
    }
  }
  cout << '\n';
}

int main() {
  FASTIO;
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

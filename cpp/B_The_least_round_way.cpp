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

ll count_x(ll n, ll x) {
  int count = 0;
  if (n == 0) return -1;
  if (n > 0) {
    while (n % x == 0) {
      count++;
      n /= x;
    }
  }
  return count;
}

// ─── SOLVE
const int INF =
    1e8;  // Nuestro "repelente" para evitar los ceros sin causar desbordamiento

int count_x(int n, int x) {
  if (n == 0) return INF;  // El veneno absoluto para la DP
  int cnt = 0;
  while (n % x == 0) {
    cnt++;
    n /= x;
  }
  return cnt;
}

const int MAXN = 1005;
int dp_two[MAXN][MAXN], dp_five[MAXN][MAXN];
char dir_two[MAXN][MAXN], dir_five[MAXN][MAXN];

void solve() {
  int n;
  if (!(cin >> n)) return;
  int zero_i = -1, zero_j = -1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int val;
      cin >> val;

      // Guardamos el botón de pánico
      if (val == 0) {
        zero_i = i;
        zero_j = j;
      }

      int c2 = count_x(val, 2);
      int c5 = count_x(val, 5);

      // Caso base: celda (1, 1)
      if (i == 1 && j == 1) {
        dp_two[i][j] = c2;
        dp_five[i][j] = c5;
      }
      // Primera fila: solo podemos venir de la izquierda
      else if (i == 1) {
        dp_two[i][j] = dp_two[i][j - 1] + c2;
        dir_two[i][j] = 'R';
        dp_five[i][j] = dp_five[i][j - 1] + c5;
        dir_five[i][j] = 'R';
      }
      // Primera columna: solo podemos venir de arriba
      else if (j == 1) {
        dp_two[i][j] = dp_two[i - 1][j] + c2;
        dir_two[i][j] = 'D';
        dp_five[i][j] = dp_five[i - 1][j] + c5;
        dir_five[i][j] = 'D';
      }
      // Celdas intermedias: competencia pura
      else {
        if (dp_two[i - 1][j] < dp_two[i][j - 1]) {
          dp_two[i][j] = dp_two[i - 1][j] + c2;
          dir_two[i][j] = 'D';
        } else {
          dp_two[i][j] = dp_two[i][j - 1] + c2;
          dir_two[i][j] = 'R';
        }

        if (dp_five[i - 1][j] < dp_five[i][j - 1]) {
          dp_five[i][j] = dp_five[i - 1][j] + c5;
          dir_five[i][j] = 'D';
        } else {
          dp_five[i][j] = dp_five[i][j - 1] + c5;
          dir_five[i][j] = 'R';
        }
      }
    }
  }

  int ans = min(dp_two[n][n], dp_five[n][n]);

  // El Juez Final: ¿Usamos el Botón de Pánico?
  if (ans > 0 && zero_i != -1) {
    cout << 1 << "\n";
    for (int i = 1; i < zero_i; i++) cout << 'D';
    for (int j = 1; j < zero_j; j++) cout << 'R';
    for (int i = zero_i; i < n; i++) cout << 'D';
    for (int j = zero_j; j < n; j++) cout << 'R';
    cout << "\n";
    return;
  }

  // Si llegamos aquí, la DP encontró un camino legal ganador
  cout << ans << "\n";
  string path = "";
  int r = n, c = n;

  // Navegamos hacia atrás por el rastro de migajas del ganador
  if (dp_two[n][n] < dp_five[n][n]) {
    while (r > 1 || c > 1) {
      path += dir_two[r][c];
      if (dir_two[r][c] == 'D')
        r--;
      else
        c--;
    }
  } else {
    while (r > 1 || c > 1) {
      path += dir_five[r][c];
      if (dir_five[r][c] == 'D')
        r--;
      else
        c--;
    }
  }

  // El toque final: enderezar la historia
  reverse(path.begin(), path.end());
  cout << path << "\n";
}

int main() {
  FASTIO;
  solve();
  return 0;
}

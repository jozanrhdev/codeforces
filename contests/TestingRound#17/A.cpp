/**
 *
 * @author Joan, N y R
 */
#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
string to_string(pair<A, B> p);

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);

string to_string(const string& s) {
    return '"' + s + '"';
}

string to_string(const char* s) {
    return to_string((string) s);
}

string to_string(bool b) {
    return (b ? "true" : "false");
}

string to_string(vector<bool> v) {
    bool first = true;
    string res = "{";
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(v[i]);
    }
    res += "}";
    return res;
}

template <size_t N>
string to_string(bitset<N> v) {
    string res = "";
    for (size_t i = 0; i < N; i++) {
        res += static_cast<char>('0' + v[i]);
    }
    return res;
}

template <typename A>
string to_string(A v) {
    bool first = true;
    string res = "{";
    for (const auto &x : v) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}

#ifdef KILLBUG
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

#define db                  double
#define ll                  long long
#define ld                  long double
#define uin                 unsigned int
#define ull                 unsigned long long
#define ar                  array
#define pb                  push_back
#define pop                 pop_back
#define mkp                 make_pair
#define unmap               unordered_map
#define F                   first
#define S                   second
#define B                   begin()
#define E                   end()

#define MOD                 1e9+7
#define PI                  acos(-1.0)
#define inf                 (1 << 61)
#define z                   1e6+5
#define yes                 cout << "YES\n"
#define no                  cout << "NO\n"
#define Case(i)             cout << "Case " << int(i) << ": "
#define endl                "\n"

#define lin(x)              ll x; cin >> x;
#define nin(x)              int x; cin >> x;
#define sin(x)              string x; cin >> x;
#define scan(a)             scanf("%d", &a)
#define scanl(a)            scanf("%lld", &a)
#define scand(a)            scanf("%lf", &a)
#define scan2(a, b)         scanf("%d %d", &a, &b)
#define scanl2(a, b)        scanf("%lld %lld", &a, &b)
#define scand2(a, b)        scanf("%lf %lf", &a, &b)

#define vin                 vector<int>
#define vll                 vector<ll>
#define vst                 vector<string>
#define pii                 pair<int, int>
#define pli                 pair<ll, int>
#define pll                 pair<ll, ll>
#define pss                 pair<string, string>
#define vpll                vector<pll>

#define FOR(i, n)           for(int i = 0; i < n; ++i)
#define IOR(i, n)           for(int i = n-1; i >= 0; --i)
#define EACH(v)             for(auto i: v)
#define FORS(i, j, k, step) for (int i = j; i < k; i+=step)
#define FORR(i, j, k, step) for (int i = j; i >= k; i-=step)
#define FMAP(map, it)       for(it = map.begin(); it != map.end(); ++it)

#define all(x)              x.begin(), x.end()
#define sortN(x)            sort(x.begin(), x.end())
#define sortI(x)            sort(x.rbegin(), x.rend())
#define mem0(a)             memset(a, 0, sizeof(a))
#define mem1(a)             memset(a, -1, sizeof(a))
#define fread               freopen("input.txt", "r", stdin)
#define fwrite              freopen("output.txt", "w", stdout)
#define FASTIO              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

clock_t starTime;
db getCurrentTime() {
    return (db)(clock() - starTime) / CLOCKS_PER_SEC;
}

void printv(vector<int>& v) {
    int sz = v.size();
    for(int i = 0; i < sz; ++i)
        cout << v[i] << " \n"[i == sz - 1];
}

bool isPrime(int *n) {
    for(int i = 2; i*i <= *n; ++i)
        if(*n % i == 0)
            return false;
    if(*n == 1)
        return false; 
    return true;
}

void readV(vector<int>& v, int *n){
    int tmp;
    FOR(i, *n) {
        cin >> tmp;
        v.pb(tmp);
    }
}

int main() {
    FASTIO;
    starTime = clock();
    int n, one = 0, two = 0, three = 0;
    cin >> n;
    FOR(i, n) {
        int tmp;
        cin >> tmp;
        if(tmp == 1)
            one++;
        if(tmp == 2)
            two++;
        if(tmp == 3)
            three++;
    }
    int ans = max(three, max(one, two));
    if(ans == three)
        cout << one + two << endl;
    else if(ans == two)
        cout << one + three << endl;
    else
        cout << three + two << endl;
    return 0;
}

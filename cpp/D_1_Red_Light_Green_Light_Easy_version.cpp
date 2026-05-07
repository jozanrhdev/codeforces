#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> pos(n);
        unordered_map<ll, int> delay;
        set<ll> semaphores;
        for (int i = 0; i < n; i++) {
            cin >> pos[i];
            semaphores.insert(pos[i]);
        }
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
            delay[pos[i]] = d;
        }

        int q;
        cin >> q;
        vector<ll> queries(q);
        for (int i = 0; i < q; i++) cin >> queries[i];

        for (ll start : queries) {
            ll curr = start;
            int dir = 0; // 0: derecha, 1: izquierda
            ll t_mod = 0;
            set<tuple<ll, int, int>> visited;

            bool escaped = false;

            while (true) {
                // Si escapas por la izquierda, termina
                if (curr < 1) {
                    cout << "YES\n";
                    escaped = true;
                    break;
                }

                auto state = make_tuple(curr, dir, t_mod);
                if (visited.count(state)) {
                    cout << "NO\n";
                    break;
                }
                visited.insert(state);

                if (!semaphores.count(curr)) {
                    // salta al siguiente semáforo en la dirección actual
                    ll next = curr;
                    if (dir == 0) { // derecha
                        auto it = semaphores.upper_bound(curr);
                        if (it == semaphores.end()) {
                            // escapás, no hay más semáforos adelante
                            cout << "YES\n";
                            escaped = true;
                            break;
                        }
                        next = *it;
                        ll steps = next - curr;
                        curr = next;
                        t_mod = (t_mod + steps) % k;
                    } else { // izquierda
                        auto it = semaphores.lower_bound(curr);
                        if (it == semaphores.begin()) {
                            // escapás, no hay más semáforos atrás
                            cout << "YES\n";
                            escaped = true;
                            break;
                        }
                        --it;
                        next = *it;
                        ll steps = curr - next;
                        curr = next;
                        t_mod = (t_mod + steps) % k;
                    }
                    continue;
                }

                // si estás en semáforo
                if (delay.count(curr) && t_mod == delay[curr]) {
                    dir ^= 1;
                }
                curr += (dir == 0) ? 1 : -1;
                t_mod = (t_mod + 1) % k;
            }
        }
    }
    return 0;
}

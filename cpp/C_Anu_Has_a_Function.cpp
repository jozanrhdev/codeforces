#include <bits/stdc++.h>
using namespace std;

// Función principal
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    // Buscamos el bit único de mayor peso (del 29 al 0)
    for (int k = 29; k >= 0; k--) {
        int count = 0, pos = -1;
        for (int i = 0; i < n; i++) {
            if ((a[i] >> k) & 1) {
                count++;
                pos = i; // Guardamos la posición del único que tiene este bit
            }
        }
        if (count == 1) {
            // Encontramos el único número con el bit k encendido
            cout << a[pos] << " ";
            for (int i = 0; i < n; i++)
                if (i != pos)
                    cout << a[i] << " ";
            cout << "\n";
            return;
        }
    }
    // Si no hay ningún bit único, imprime el arreglo como está
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t; cin >> t; while (t--) solve();
    solve();
    return 0;
}

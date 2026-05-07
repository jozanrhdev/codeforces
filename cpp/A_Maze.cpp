// Incluye todas las bibliotecas estándar de C++. Común en programación competitiva para simplicidad.
#include <bits/stdc++.h>

// Usa el espacio de nombres estándar para evitar escribir std:: repetidamente.
using namespace std;

// Macros para escribir tipos de datos de forma más corta.
#define ll long long
#define ar array

// --- Variables Globales ---
int n, m, k; // n: filas, m: columnas, k: número de celdas a convertir en 'X'.
vector<string> grid; // Almacena el laberinto/cuadrícula.
vector<vector<bool>> vis; // Cuadrícula para marcar celdas visitadas (evita ciclos).
vector<pair<int, int>> order; // Almacena las coordenadas de las celdas en el orden de visita del DFS.

/**
 * @brief Realiza una Búsqueda en Profundidad (DFS) para explorar el laberinto.
 * 
 * @param x Fila actual.
 * @param y Columna actual.
 */
void dfs(int x, int y) {
  // 1. Marcar la celda actual como visitada.
  vis[x][y] = true;
  // 2. Registrar la celda en el orden de visita.
  order.push_back({x, y});

  // 3. Explorar las 4 celdas vecinas (derecha, izquierda, abajo, arriba).
  for (int i = 0; i < 4; i++) {
    int dx[] = {0, 0, 1, -1}; // Cambios en la fila
    int dy[] = {1, -1, 0, 0}; // Cambios en la columna
    
    int nx = x + dx[i]; // Coordenada de la nueva fila
    int ny = y + dy[i]; // Coordenada de la nueva columna

    // 4. Comprobar si la celda vecina es válida para ser visitada.
    if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && grid[nx][ny] == '.') {
      // Si es válida (dentro de los límites, no visitada y es un pasillo), continuar la búsqueda desde allí.
      dfs(nx, ny);
    }
  }
}

/**
 * @brief Función principal que resuelve el problema.
 */
void solve() {
  // --- Lectura de Datos ---
  cin >> n >> m >> k;
  grid.resize(n);
  for (int i = 0; i < n; i++) cin >> grid[i];
  
  // Inicializa la cuadrícula de visitados, todas las celdas como no visitadas.
  vis.assign(n, vector<bool>(m, false));

  // --- Búsqueda del Punto de Inicio y Ejecución del DFS ---
  // Recorre la cuadrícula para encontrar el primer pasillo ('.')
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == '.') {
        // Al encontrar el primer pasillo, inicia la búsqueda en profundidad (DFS) desde este punto.
        // El DFS explorará y registrará todas las celdas de pasillo conectadas.
        dfs(i, j);
        // Una vez que el DFS ha explorado toda el área conectada, salta a la sección de modificación.
        goto done;
      }
    }
  }

done:
  // --- Modificación del Laberinto ---
  // El DFS explora "hacia el fondo" primero. Las últimas celdas añadidas a `order`
  // son las más profundas o lejanas en la ruta de exploración.
  // Este bucle convierte las últimas 'k' celdas visitadas en 'X'.
  for (int i = 0; i < k; i++) {
    // Obtiene las coordenadas de la i-ésima celda desde el final del recorrido.
    auto [x, y] = order[order.size() - 1 - i];
    // Marca esa celda como 'X'.
    grid[x][y] = 'X';
  }

  // --- Impresión del Resultado ---
  // Imprime el laberinto modificado línea por línea.
  for (auto &s : grid) {
    cout << s << '\n';
  }
}

/**
 * @brief Punto de entrada del programa.
 */
int main() {
  // Optimización para acelerar la entrada y salida de datos en C++.
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  // Llama a la función que contiene la lógica principal del problema.
  solve();
}

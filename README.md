# Codeforces Solutions

Soluciones de programación competitiva en C++, Java y Python — organizadas por dificultad y tipo de problema.

```
                          . : : : .
             .   *      .:       :.      *   .
           .           .:  _   _  :.           .
        *             : . (*)  (*) . :             *
                     :   .  ===  .   :
          .         :   .  /   \  .   :         .
                    :  .  / ~~~ \  .  :
                    : . /__________. :
         *         .:  |  CTHULHU  |  :.         *
                  .:   |___________|   :.
                 .:   /             \   :.
    .           .:   /    ~~~~~~~~   \   :.           .
               .:   / ~~ tentáculos   \   :.
              .:   /~~~~~~~~~~~~~~~~~~~~\   :.
      *       :   /~~~~~~~~~~~~~~~~~~~~~~\   :       *
             .:  / ~~ ACEPTA EL WA ~~~~~~ \  :.
   .         :  /~~~~~~~~~~~~~~~~~~~~~~~~~~\  :         .
             : /~~~~~~~~~~~~~~~~~~~~~~~~~~~~\ :
             `'~~~~~~~~~~~~~~~~~~~~~~~~~~~~'`
        *          .  .  *  .  .  *                *
```

## Estructura

```
codeforces/
├── Base.cpp          # plantilla C++
├── Base.java         # plantilla Java
├── Base.py           # plantilla Python
├── cpp/              # soluciones C++
├── java/             # soluciones Java
├── py/               # soluciones Python
└── contests/         # rondas de concurso
```

## Plantillas

Cada archivo base incluye:

| Característica | C++ | Java | Python |
|----------------|-----|------|--------|
| Entrada rápida | ✓ `FASTIO` | ✓ `FastScanner` | ✓ `sys.stdin` |
| Debug macro | ✓ `KILLBUG` | — | — |
| Utilidades matemáticas | gcd, lcm, pw, isPrime | gcd, lcm, pw, isPrime | gcd, lcm, pw, is_prime, criba |
| DSU | — | — | ✓ clase `DSU` |
| Alias de tipos | ✓ ll, ld, pii, vll... | — | — |

## Uso

Copia la plantilla del lenguaje que uses, renómbrala y rellena `solve()`.

**C++ — activar debug:**
```bash
g++ -DKILLBUG -o sol sol.cpp
```

**Java — compilar y ejecutar:**
```bash
javac Base.java && java Base
```

**Python:**
```bash
python Base.py < input.txt
```

## Convención de nombres

```
[concurso]_[letra]_[TituloCorto].[ext]
# ej: 1475_A_Odd_Divisor.cpp
```

---

```
 ______________________________________
/ Code is like humor. When you have to \
\ explain it, it's bad.                /
 --------------------------------------
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
```

Hecho con ❤️ por [Joan](https://github.com/Johan769)

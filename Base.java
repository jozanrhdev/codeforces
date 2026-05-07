import java.io.*;
import java.util.*;

public class Base {

    static PrintWriter out;
    static FastScanner fs;

    // ─── CONSTANTES
    static final long MOD = 1_000_000_007L;
    static final long INF = Long.MAX_VALUE / 2;

    // ─── SOLVE
    static void solve() {
        int n = fs.nextInt();
        // escribe la solución aquí
        out.println(n);
    }

    // ─── MAIN
    public static void main(String[] args) {
        fs  = new FastScanner();
        out = new PrintWriter(new BufferedOutputStream(System.out));
        int t = fs.nextInt();
        while (t-- > 0) solve();
        out.close();
    }

    // ─── UTILS
    static long gcd(long a, long b) { return b == 0 ? a : gcd(b, a % b); }
    static long lcm(long a, long b) { return a / gcd(a, b) * b; }
    static long pw(long base, long exp, long mod) {
        long r = 1; base %= mod;
        while (exp > 0) { if ((exp & 1) == 1) r = r * base % mod; base = base * base % mod; exp >>= 1; }
        return r;
    }
    static boolean isPrime(long n) {
        if (n < 2) return false;
        for (long i = 2; i * i <= n; i++) if (n % i == 0) return false;
        return true;
    }
    static int[]  readArray(int n)     { int[]  a = new int[n];  for (int i = 0; i < n; i++) a[i] = fs.nextInt();  return a; }
    static long[] readLongArray(int n) { long[] a = new long[n]; for (int i = 0; i < n; i++) a[i] = fs.nextLong(); return a; }

    // ─── FAST SCANNER
    static class FastScanner {
        private final BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        private StringTokenizer st = new StringTokenizer("");

        String next() {
            while (!st.hasMoreTokens()) {
                try { st = new StringTokenizer(br.readLine()); }
                catch (IOException e) { throw new RuntimeException(e); }
            }
            return st.nextToken();
        }
        int    nextInt()    { return Integer.parseInt(next()); }
        long   nextLong()   { return Long.parseLong(next()); }
        double nextDouble() { return Double.parseDouble(next()); }
        String nextLine()   {
            try { return br.readLine(); }
            catch (IOException e) { throw new RuntimeException(e); }
        }
    }
}

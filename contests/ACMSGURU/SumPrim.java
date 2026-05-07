import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class SumPrim {

    static int ans = 0, N;
    private static Scanner in = new Scanner(System.in);

    public static void print(String s) {
        out.println(s); 
    }

    public static String str(int n) {
        return Integer.toString(n);
    }

    public static boolean esPrimo(int numero){
        int contador = 2;
        boolean primo = true;
        while ((primo) && (contador != numero)){
            if (numero % contador == 0)
                primo = false;
            contador++;
        }
        return primo;
    }

    public static void solve() {
        int i, j;
        for (i = N; i > 1; --i) {
            for(j = 2; j <= i; ++j) {
                if(esPrimo(i) && esPrimo(j))
                    if(i + j <= N && esPrimo(i + j))
                        ans++;
            }
        }
        print(str(ans));
    }

    public static void main(String[] args) {
        N = in.nextInt();
        solve();   
    }
}

#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

const int maxn = 1000000 + 100;
const int Size = 100000;
int prime[Size], cnt;
bool mark[maxn];
vector<int> ans;

void sieve(int n)
{
    int i, j;
    cnt = 1, prime[0] = 2;
    for(i=3; i<=n; i += 2)
    {
        if(!mark[i]) prime[cnt++] = i;
        for(j=1; j<cnt && prime[j]<=n/i; ++j)
        {
            mark[i*prime[j]] = 1;
            if(!(i%prime[j])) 
                break;
        }
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    sieve(n);
    for(i=1; i<cnt; ++i)
    {
        if(prime[i] - prime[i-1] == 2)
        {
            ans.push_back(i-1);
        }
    }
    printf("%d\n", ans.size());
    for(i=0; i<ans.size(); ++i)
    {
        printf("2 %d\n", prime[ ans[i] ]);
    }
    return 0;
}

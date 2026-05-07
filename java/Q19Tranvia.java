import java.util.*;
import static java.lang.System.out;

public class Q19Tranvia {

    static Scanner in = new Scanner(System.in);

    static  int transp(int ar1[], int ar2[], int n) {
        int ans = ar1[0] + ar2[0];
        int max = ar1[0] + ar2[0];
        for(int i = 1; i < n; ++i) {
            ans -= ar1[i];
            ans += ar2[i];
            if(max < ans)
                max = ans;
        }
        return max;
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        int trans1[] = new int[n];
        int trans2[] = new int[n];
        for(int i = 0; i < n; ++i) {
            trans1[i] = in.nextInt();
            trans2[i] = in.nextInt();
        }
        out.println(transp(trans1, trans2, n));
    }
}
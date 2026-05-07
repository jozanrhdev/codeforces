import java.util.*;

import static java.lang.System.out;

public class Q13PerfectPermutation {

    static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int n = in.nextInt();
        int ans[] = new int[n];
        if (n == 1)
            out.println(-1);
        else {
            for (int i = 0; i < n; i++)
                ans[i] = i + 1;
            for (int i = 0; i < n - 1; i+=2) {
                ans[i]++;
                ans[i + 1]--;
            }
            boolean ok = true;
            for (int i = 0; i < n; i++) {
                if (ans[i] == i + 1) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                for (int i = 0; i < n; ++i)
                    out.print(ans[i] + " ");
            } else
                out.println(-1);
        }
    }
}

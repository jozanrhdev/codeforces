import java.util.*;

import static java.lang.System.out;

public class Q18I_love_username {

    static Scanner in = new Scanner(System.in);

    static int actuacion(int r[], int n) {
        int max = r[0];
        int min = r[0];
        int ans = 0;
        for (int i = 1; i < n; ++i) {
            if (max < r[i]) {
                max = r[i];
                ans++;
            }
            if (min > r[i]) {
                min = r[i];
                ans++;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        int res[] = new int[n];
        for (int i = 0; i < n; i++) {
            res[i] = in.nextInt();
        }
        out.println(actuacion(res, n));
    }
}

import java.util.*;
import static java.lang.System.out;

public class Q28Team {

    static int ans = 0;
    static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int n = in.nextInt();
        int q[][] = new int[n][3];
        for(int i = 0; i < n; ++i) {
            int cont = 0;
            for(int j = 0; j < 3; ++j) {
                q[i][j] = in.nextInt();
                if(q[i][j] == 1)
                    cont++;
            }
            if(cont > 1)
                ans++;
        }
        out.println(ans);
    }
}
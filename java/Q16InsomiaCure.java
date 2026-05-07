import java.util.*;
import static java.lang.System.out;

public class Q16InsomiaCure {

    static Scanner in = new Scanner(System.in);

    static int drakesDanger(int []ar, int d) {
        int ans = 0;
        for(int i = 1; i <= d; ++i) {
            for(int j = 0; j < ar.length; ++j) {
                if(i % ar[j] == 0) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        int ar[] = new int[4];
        for(int i = 0; i < 4; ++i)
            ar[i] = in.nextInt();
        int d = in.nextInt();
        out.println(drakesDanger(ar, d));
    }
}

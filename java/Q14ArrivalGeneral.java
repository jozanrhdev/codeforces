import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q14ArrivalGeneral {

    static Scanner in = new Scanner(System.in);

    static int seg(int ar[]) {
        int max = 0;
        int min = 100;
        int posM = 0;
        int posm = 0;
        for(int i = 0; i < ar.length; ++i) {
            if(ar[i] > max) {
                max = ar[i];
                posM = i;
            }
            if(ar[i] <= min) {
                min = ar[i];
                posm = i;
            }
        }
        int ans = posM + Math.abs(posm - (ar.length - 1));
        if(posM - posm > 0)
            ans--;
        return ans;
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        int sold[] = new int[n];
        for(int i = 0; i < n; ++i)
            sold[i] = in.nextInt();
        out.println(seg(sold));
    }
}

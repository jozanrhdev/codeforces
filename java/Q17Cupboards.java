import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q17Cupboards {

    static Scanner in = new Scanner(System.in);

    static int closeOpen(int d[], int i[], int n) {
        int contd1 = 0;
        int contd0 = 0;
        int conti1 = 0;
        int conti0 = 0;
        for(int j = 0; j < n; ++j) {
            if(d[j] == 0)
                contd0++;
            else
                contd1++;
            if(i[j] == 0)
                conti0++;
            else
                conti1++;
        }
        return Math.min(contd0, contd1) + Math.min(conti0, conti1);
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        int d[] = new int[n];
        int i[] = new int[n];
        for(int j = 0; j < n; ++j) {
            d[j] = in.nextInt();
            i[j] = in.nextInt();
        }
        out.println(closeOpen(d, i, n));
    }
}

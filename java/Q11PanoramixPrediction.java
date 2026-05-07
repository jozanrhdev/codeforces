import java.util.*;
import static java.lang.System.out;

public class Q11PanoramixPrediction {

    static Scanner in = new Scanner(System.in);

    static boolean predict(int n, int m) {
        for(int i = n + 1; i <= m; ++i) {
            if(esPrim(i))
                if(i != m)
                    return false;
                else
                    return true;
        }
        return false;
    }

    static boolean esPrim(int num) {
        int lim = (int)Math.sqrt((double)num);
        for(int i = 2; i <= lim; ++i)
            if (num % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        int m = in.nextInt();
        out.println(predict(n, m)?"YES":"NO");
    }
}

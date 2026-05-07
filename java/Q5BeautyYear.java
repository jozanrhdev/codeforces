import java.util.*;
import static java.lang.System.out;

public class Q5BeautyYear {

    static int ans;
    static Scanner in = new Scanner(System.in);

    static int BeaYear(int n) {
        int ans = 0;
        int i = n + 1;
        while(true) {
            if(diff(str(i))) {
                ans = i;
                break;
            }
            ++i;
        }
        return ans;
    }

    static boolean diff(String s) {
        char lle[] = s.toCharArray();
        for(int i = 0; i < lle.length - 1; ++i) {
            for(int j = i + 1; j < lle.length; ++j) {
                if(lle[i] == lle[j]) {
                    return false;
                }
            }
        }
        return true;
    }

    static String str(int n) {
        return Integer.toString(n);
    }

    public static void main(String[] args) {
        int year = in.nextInt();
        int ans = BeaYear(year);
        out.println(ans);
    }
}

import java.awt.*;
import java.util.*;
import static java.lang.System.out;

public class Q12UltraFastMath {

    static Scanner in = new Scanner(System.in);

    static String fastMath(String s1[], String s2[]) {
        String ans = "";
        for(int i = 0; i < s1.length; ++i) {
            if(!s1[i].equals(s2[i]))
                ans += "1";
            else
                ans += "0";
        }
        return ans;
    }

    public static void main(String[] args) {
        String num1[] = in.nextLine().split("");
        String num2[] = in.nextLine().split("");
        String ans = fastMath(num1, num2);
        out.println(ans);
    }
}

import java.util.*;

import static java.lang.System.out;

public class Q29Bitplusplus {

    static int ans = 0;
    static Scanner in = new Scanner(System.in);

    static void sumRes(String s[]) {
        for(int i = 0; i < s.length; ++i) {
            char l[] = s[i].toCharArray();
            if((l[0] == '+' && l[1] == '+' && l[2] == 'X') || (l[1] == '+' && l[2] == '+' && l[0] == 'X'))
                ans++;
            else if((l[0] == '-' && l[1] == '-' && l[2] == 'X') || (l[1] == '-' && l[2] == '-' && l[0] == 'X'))
                ans--;
        }
        out.println(ans);
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        String pm[] = new String[n];
        in.nextLine();
        for(int i = 0; i < n; ++i)
            pm[i] = in.nextLine();
        sumRes(pm);
    }
}
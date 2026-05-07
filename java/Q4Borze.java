import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q4Borze {

    static Scanner in = new Scanner(System.in);

    static String Borz(String s) {
        char ent[] = s.toCharArray();
        String ans = "";
        for(int i = 0; i < ent.length; ++i) {
            if(ent[i] == '.')
                ans += "0";
            else {
                if(ent[i+1] == '.')
                    ans += "1";
                else
                    ans += "2";
                ++i;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        String s = in.nextLine();
        String sub = Borz(s);
        out.println(sub);
    }
}

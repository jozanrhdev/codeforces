import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Adivinar1 {

    static String ans;
    static Scanner in = new Scanner(System.in); 
    
    public static void main(String[] args) {
        int n = in.nextInt();
        int m = in.nextInt();
        int resto;
        if(n % m == 0)
            resto = m;
        else
            resto = n % m;
        for(int i = 1; i <= m; ++i) {
            String le = in.nextLine();
            out.println(le + " " + i + " " + m);
            if(i == resto)
                ans = le;
        }
        out.println(ans);
    }
}

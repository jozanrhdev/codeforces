import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Comprimes {

    static int ans = 0;
    static Scanner in = new Scanner(System.in); 
    
    static int mcd(int num1, int num2) {
        int mcd = 0;
        int a = num1;
        int b = num2;
        do {
            mcd = b;
            b = a % b;
            a = mcd;
        }while(b != 0);
        return mcd;
    }
    public static void main(String[] args) {
        int n = in.nextInt();
        int b = n;
        while(n != 0) {
            if(mcd(b,n) == 1)
                ans++;
            --n;
        }
        out.println(ans);
    }
}

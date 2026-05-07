import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Empanadas {

    static int ans;
    static Scanner in = new Scanner(System.in); 
    
    public static void main(String[] args) {
        int ar[] = new int[6];
        int ard[] = new int[3];
        for(int i = 0; i < 6; ++i)
            ar[i] = in.nextInt();
        for(int i = 0; i < 3; ++i)
            ard[i] = ar[i] / ar[i+3];
        ans = Math.min(ard[0], ard[1]);
        ans = Math.min(ans, ard[2]);
        out.println(ans);
    }
}

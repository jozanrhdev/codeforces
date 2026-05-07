import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class MedianMedians {

    static long ans;
    static Scanner in = new Scanner(System.in); 
    
    public static void main(String[] args) {
        long ar1[] = new long[3];
        long ar2[] = new long[3];
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                ar1[j] = in.nextInt();
            }
            Arrays.sort(ar1);
            ar2[i] = ar1[1];
        }
        Arrays.sort(ar2);
        ans = ar2[1];
        out.println(ans);
    }
}

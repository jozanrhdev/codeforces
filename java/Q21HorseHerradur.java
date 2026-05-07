import java.util.*;
import static java.lang.System.out;

public class Q21HorseHerradur {

    static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        int ar[] = new int[4];
        for (int i = 0; i < 4; i++)
            ar[i] = in.nextInt();
        int ans = 0;
        for(int i = 0; i < 3; ++i) {
            if(ar[i] != -1) {
                for(int j = i + 1; j < 4; ++j) {
                    if(ar[i] == ar[j]) {
                        ans++;
                        ar[j] = -1;
                    }
                }
            }
        }
        out.println(ans);
    }
}
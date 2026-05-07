import java.util.*;
import static java.lang.System.out;

public class Q10StonesInTable {

    static Scanner in = new Scanner(System.in);

    static int colors(String c[]) {
        int ans = 0;
        for (int i = 0; i < c.length - 1; ++i)
            if(c[i].equals(c[i+1]))
                ans++;
        return ans;
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        in.nextLine();
        String stone[] = in.nextLine().split("");
        int ans = colors(stone);
        out.println(ans);
    }
}
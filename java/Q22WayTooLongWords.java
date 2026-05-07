import java.util.*;
import static java.lang.System.out;

public class Q22WayTooLongWords {

    static Scanner in = new Scanner(System.in);

    static void solve(String w[], int n) {
        for(int i = 0; i < n; ++i) {
            if(w[i].length() <= 10)
                out.println(w[i]);
            else {
                String ans = "";
                char letters[] = w[i].toCharArray();
                ans += letters[0];
                ans += Integer.toString(letters.length - 2);
                ans += letters[letters.length - 1];
                out.println(ans);
            }
        }
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        String words[] = new String[n];
        in.nextLine();
        for(int i = 0; i < n; ++i)
            words[i] = in.nextLine();
        solve(words, n);
    }
}

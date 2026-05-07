import java.util.*;
import static java.lang.System.out;

public class Q27PetyayStrings {

    static Scanner in = new Scanner(System.in);

    static int equalsxd(String w1, String w2) {
        if(w1.compareToIgnoreCase(w2) > 0 )
            return 1;
        else if(w1.compareToIgnoreCase(w2) < 0)
            return -1;
        else
            return 0;
    }

    public static void main(String[] args) {
        String words;
        String words2;
        words = in.nextLine();
        words2 = in.nextLine();
        String words1 = words.replace(" ", "");
        out.println(equalsxd(words1, words2));
    }
}
import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q23BoyOrGirl {

    static Scanner in = new Scanner(System.in);

    static void chatN(String s) {
        ArrayList<String> aer = new ArrayList<>();
        char lleters[] = s.toCharArray();
        for(int i = 0; i < lleters.length; ++i) {
            String sub = "" + lleters[i];
            boolean ok = aer.contains(sub);
            if(!ok)
                aer.add(sub);
        }
        out.println((aer.size() % 2 != 0)?"IGNORE HIM!":"CHAT WITH HER!");
    }

    public static void main(String[] args) {
        String name = in.nextLine();
        chatN(name);
    }
}
import java.util.*;
import static java.lang.System.out;

public class Q26HQ9plus {

    static Scanner in = new Scanner(System.in);

    static boolean instruct(String s) {
        char letters[] = s.toCharArray();
        int cont = 0;
        for (char ch : letters)
            if (ch == 'H')
                return true;
            else if (ch == 'Q')
                return true;
            else if (ch == '9')
                return true;
            else if (ch == '+')
                cont++;
            else if (ch == '=')
                if (cont != 0)
                    return false;
        for (char i = '0'; i < '9'; ++i)
            if (letters[0] == i)
                return false;
        if (cont == 1 && s.length() != 1 && s.length() < 3 && letters[0] != '+')
            return true;
        return false;
    }

    public static void main(String[] args) {
        String p = in.nextLine();
        out.println(instruct(p) ? "YES" : "NO");
    }
}
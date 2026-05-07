import java.util.*;
import static java.lang.System.out;

public class Q24AmusingJoke {

    static Scanner in = new Scanner(System.in);

    static void TFnames(String n1[], String n2[], String l[]) {
        int cont = 0;
        ArrayList<String> p1 = new ArrayList<>();
        for(int i = 0; i < l.length; ++i)
            p1.add(l[i]);
        for(int i = 0; i < n1.length; ++i) {
            int index = p1.indexOf(n1[i]);
            if(index != -1)
                p1.remove(index);
            else
                cont++;
        }
        for(int i = 0; i < n2.length; ++i) {
            int index = p1.indexOf(n2[i]);
            if(index != -1)
                p1.remove(index);
            else
                cont++;
        }
        out.println((cont == 0 && p1.size() == 0)?"YES":"NO");
    }

    public static void main(String[] args) {
        String name1[] = in.nextLine().split("");
        String name2[] = in.nextLine().split("");
        String letters[] = in.nextLine().split("");
        TFnames(name1, name2, letters);
    }
}
import java.util.Scanner;

public class Q22Rebuild {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String ans, abrev = "";
        sc.nextLine();
        while(n-- > 0) {
            ans = sc.nextLine();
            int l = ans.length();
            if(l > 10) {
                int cant = l - 2;
                abrev = ans.charAt(0) + String.valueOf(cant) + ans.charAt(l - 1);
                ans = abrev;
            }
            System.out.println(ans);
        }
    }
}

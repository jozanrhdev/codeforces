import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class VacasToros {

    static Scanner in = new Scanner(System.in); 

    public static void main(String[] args) {
        String num1 = in.nextLine();
        String num2 = in.nextLine();
        int vacas = 0;
        int toros = 0;
        for(int i = 0; i < num1.length(); ++i) {
            for(int j = 0; j < num2.length(); ++j) {
                if(num1.charAt(i) == num2.charAt(j)) {
                    if(i == j)
                        toros++;
                    else
                        vacas++;
                }
            }
        }
        out.println(toros + " " + vacas);
    }
}

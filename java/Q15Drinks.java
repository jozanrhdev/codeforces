import java.util.*;
import static java.lang.System.out;

public class Q15Drinks {

    static Scanner in = new Scanner(System.in);

    static double porcentaje(double ar[], int m) {
        double n = (double)m;
        double sum = 0;
        for(int i = 0; i < ar.length; ++i) {
            ar[i] /= 100;
            sum += ar[i];
        }
        return sum / n * 100;
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        double cent[] = new double[n];
        for(int i = 0; i < n; ++i)
            cent[i] = in.nextDouble();
        out.println(String.format("%.12f", porcentaje(cent,n)));
    }
}

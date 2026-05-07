import java.io.*;
import java.util.*;
import java.math.*;

import static java.lang.System.out;

public class Q25SoftDrinking {

    static Scanner in = new Scanner(System.in);

    static int Min3(int a, int b, int c) {
        a = Math.min(a, b);
        return Math.min(a, c);
    }

    public static void main(String[] args) {
        int n = in.nextInt();
        int k = in.nextInt();
        int l = in.nextInt();
        int c = in.nextInt();
        int d = in.nextInt();
        int p = in.nextInt();
        int nl = in.nextInt();
        int np = in.nextInt();
        int num1 = Math.floorDiv(k * l, nl);
        int num2 = c * d;
        int num3 = Math.floorDiv(p, np);
        out.println(Math.floorDiv(Min3(num1, num2, num3), n));
    }
}
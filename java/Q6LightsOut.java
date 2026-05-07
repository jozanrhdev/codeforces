import java.util.*;

import static java.lang.System.out;

public class Q6LightsOut {

    static int ar[][] = new int[3][3];
    static Scanner in = new Scanner(System.in);

    static int[][] Out(int ar[][]) {
        int ans[][] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; j++) {
                if (ar[i][j] % 2 != 0) {
                    if (i == 0 && j == 0) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j + 1] == 0)
                            ans[i][j + 1] = 1;
                        else
                            ans[i][j + 1] = 0;
                        if (ans[i + 1][j] == 0)
                            ans[i + 1][j] = 1;
                        else
                            ans[i + 1][j] = 0;
                    }
                    if (i == 0 && j == 1) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j + 1] == 0)
                            ans[i][j + 1] = 1;
                        else
                            ans[i][j + 1] = 0;
                        if (ans[i + 1][j] == 0)
                            ans[i + 1][j] = 1;
                        else
                            ans[i + 1][j] = 0;
                        if (ans[i][j - 1] == 0)
                            ans[i][j - 1] = 1;
                        else
                            ans[i][j - 1] = 0;
                    }
                    if (i == 0 && j == 2) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j - 1] == 0)
                            ans[i][j - 1] = 1;
                        else
                            ans[i][j - 1] = 0;
                        if (ans[i + 1][j] == 0)
                            ans[i + 1][j] = 1;
                        else
                            ans[i + 1][j] = 0;
                    }
                    if (i == 1 && j == 0) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j + 1] == 0)
                            ans[i][j + 1] = 1;
                        else
                            ans[i][j + 1] = 0;
                        if (ans[i - 1][j] == 0)
                            ans[i - 1][j] = 1;
                        else
                            ans[i - 1][j] = 0;
                        if (ans[i + 1][j] == 0)
                            ans[i + 1][j] = 1;
                        else
                            ans[i + 1][j] = 0;
                    }
                    if (i == 1 && j == 1) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j + 1] == 0)
                            ans[i][j + 1] = 1;
                        else
                            ans[i][j + 1] = 0;
                        if (ans[i][j - 1] == 0)
                            ans[i][j - 1] = 1;
                        else
                            ans[i][j - 1] = 0;
                        if (ans[i - 1][j] == 0)
                            ans[i - 1][j] = 1;
                        else
                            ans[i - 1][j] = 0;
                        if (ans[i + 1][j] == 0)
                            ans[i + 1][j] = 1;
                        else
                            ans[i + 1][j] = 0;
                    }
                    if (i == 1 && j == 2) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j - 1] == 0)
                            ans[i][j - 1] = 1;
                        else
                            ans[i][j - 1] = 0;
                        if (ans[i - 1][j] == 0)
                            ans[i - 1][j] = 1;
                        else
                            ans[i - 1][j] = 0;
                        if (ans[i + 1][j] == 0)
                            ans[i + 1][j] = 1;
                        else
                            ans[i + 1][j] = 0;
                    }
                    if (i == 2 && j == 0) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j + 1] == 0)
                            ans[i][j + 1] = 1;
                        else
                            ans[i][j + 1] = 0;
                        if (ans[i - 1][j] == 0)
                            ans[i - 1][j] = 1;
                        else
                            ans[i - 1][j] = 0;
                    }
                    if (i == 2 && j == 1) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j - 1] == 0)
                            ans[i][j - 1] = 1;
                        else
                            ans[i][j - 1] = 0;
                        if (ans[i][j + 1] == 0)
                            ans[i][j + 1] = 1;
                        else
                            ans[i][j + 1] = 0;
                        if (ans[i - 1][j] == 0)
                            ans[i - 1][j] = 1;
                        else
                            ans[i - 1][j] = 0;
                    }
                    if (i == 2 && j == 2) {
                        if (ans[i][j] == 0)
                            ans[i][j] = 1;
                        else
                            ans[i][j] = 0;
                        if (ans[i][j - 1] == 0)
                            ans[i][j - 1] = 1;
                        else
                            ans[i][j - 1] = 0;
                        if (ans[i - 1][j] == 0)
                            ans[i - 1][j] = 1;
                        else
                            ans[i - 1][j] = 0;
                    }
                }
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; j++)
                ar[i][j] = in.nextInt();
        int[][] ans = Out(ar);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                out.print(ans[i][j]);
            }
            out.println();
        }
    }
}

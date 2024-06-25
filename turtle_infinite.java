import java.util.*;

public class turtle_infinite {
    public static int solve(int n, int m) {
        // a0 will change to a0 | a1
        // ai will change to ai-1 | ai | ai-2

        if (m == 0) {
            return n;
        }

        if (n == 0) {
            int temp = 0;
            for (int i = 1; i <= m; i++) {
                temp = temp | i;
            }
            return temp;
        } else {
            int temp = n;
            if (n >= 1) {
                temp = temp - 1 | temp | temp + 1;
            }
            for (int i = 2; i <= m; i++) {
                temp = temp | n + i;
            }

            return temp;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int[] res = new int[t];

        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            res[i] = solve(n, m);
        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}

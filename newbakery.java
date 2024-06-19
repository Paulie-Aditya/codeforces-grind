import java.util.*;

public class newbakery {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long res[] = new long[t];

        for (int curr = 0; curr < t; curr++) {

            int n = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            int k = Math.max(b - a + 1, 0);
            int max = Math.min(n, b);
            if (k > max)
                k = max;
            long profit = k * (2l * b - k + 1l) / 2l + (n - k) * 1l * a;

            res[curr] = profit;
        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}

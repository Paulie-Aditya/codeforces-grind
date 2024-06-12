import java.util.*;

public class maxMultipleSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int res[] = new int[t];

        for (int k = 0; k < t; k++) {

            int n = sc.nextInt();
            int maxi = 0;
            int max_value = 2;
            for (int x = 2; x <= n; x++) {
                int until = n / x;
                int curr = (until * (until + 1)) / 2;

                curr = curr * x;
                if (maxi < curr) {
                    max_value = x;
                }
                maxi = Math.max(maxi, curr);
            }
            res[k] = max_value;

        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}

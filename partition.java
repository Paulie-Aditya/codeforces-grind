import java.math.BigInteger;
import java.util.*;

public class partition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // y0 = 0
        // yi = (x1+ x2 + x3 + ..) (j = 1 ; j<=N)

        int n = sc.nextInt();
        long k = sc.nextInt();

        long arr[] = new long[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        // less than k on left
        // more than k on right

        long sum = 0;
        long mini = Math.min(0, arr[0]);
        long maxi = Math.max(0, arr[0]);
        boolean ans = false;
        for (int j = 0; j < n; j++) {
            sum += arr[j];
            mini = Math.min(sum, mini);
            maxi = Math.max(maxi, sum);
            if (maxi >= k) {
                ans = true;
                break;
            }
        }
        if (ans || (k >= mini || k <= maxi)) {
            System.out.println("Yes");
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
        } else {
            System.out.println("No");
        }

    }
}

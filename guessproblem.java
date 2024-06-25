import java.util.*;

public class guessproblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        int res[] = new int[t];

        for (int k = 0; k < t; k++) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int mini = Math.max(arr[0], arr[1]);
            for (int i = 0; i < n - 1; i++) {
                int maxi = Math.max(arr[i], arr[i + 1]);
                mini = Math.min(mini, maxi);
            }

            res[k] = mini - 1;

        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
        // find all maximums and output min -1

    }
}

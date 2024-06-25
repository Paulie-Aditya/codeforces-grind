import java.util.*;

public class missingcoinsum {
    static HashMap<Integer, Boolean> sum = new HashMap<>();

    public static void sums(int arr[], int curr, int idx, int n) {
        if (idx >= n) {
            sum.put(curr, true);
            return;
        }

        sums(arr, curr, idx + 1, n);
        curr += arr[idx];
        sums(arr, curr, idx + 1, n);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int overall_sum = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            overall_sum += arr[i];
        }

        sums(arr, 0, 0, n);

        // traverse between 1 and overall sum
        int ans = overall_sum + 1;
        for (int i = 1; i <= overall_sum; i++) {
            if (!(sum.containsKey(i))) {
                ans = i;
                break;
            }
        }
        System.out.println(ans);

    }
}

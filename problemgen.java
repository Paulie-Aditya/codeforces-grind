import java.util.*;

public class problemgen {
    public static int solve(int n, int m, String a) {
        int arr[] = new int[7];

        for (int i = 0; i < n; i++) {
            arr[a.charAt(i) - 'A'] += 1;
        }

        int count = 0;
        for (int i = 0; i < 7; i++) {
            if (arr[i] < m) {
                count += m - arr[i];
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int arr[] = new int[t];

        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            String a = sc.next();

            arr[i] = solve(n, m, a);

        }

        for (int i = 0; i < t; i++) {
            System.out.println(arr[i]);
        }
    }
}

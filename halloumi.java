import java.util.*;

public class halloumi {
    public static String solve(int n, int k, int arr[]) {

        if (k <= 1) {
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] > arr[i + 1])
                    return "NO";
            }
            return "YES";
        }

        // count inversions
        // int count = 0;
        // for(int i = 0; i<n-1; i++){
        // if(arr[i] > arr[i+1]){
        // count++;
        // }
        // }

        return "YES";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String res[] = new String[t];

        for (int x = 0; x < t; x++) {
            int n = sc.nextInt();
            int k = sc.nextInt();

            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            String ans = solve(n, k, arr);
            res[x] = ans;
        }

        for (int x = 0; x < t; x++) {
            System.out.println(res[x]);
        }
    }

}

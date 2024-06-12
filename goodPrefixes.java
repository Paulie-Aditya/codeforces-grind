import java.util.*;

public class goodPrefixes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long res[] = new long[t];

        for (int k = 0; k < t; k++) {

            int n = sc.nextInt();

            HashMap<Long, Boolean> map = new HashMap<>();
            int count = 0;

            long sum = 0;
            long arr[] = new long[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            for (int i = 0; i < n; i++) {

                if (arr[i] == sum || (((sum + arr[i]) % 2 == 0) && map.containsKey((sum + arr[i]) / 2)))
                    count++;
                map.put(arr[i], true);
                sum += arr[i];
            }

            res[k] = count;
        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }

    }
}
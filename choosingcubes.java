import java.util.*;

public class choosingcubes {
    public static String solve(int n, int f, int k, ArrayList<Integer> arr) {
        int fav = arr.get(f - 1);
        // find first occurence after sorting
        // find last occurence after sorting

        Collections.sort(arr, Collections.reverseOrder());
        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();

        for (int i = 0; i < k; i++) {
            arr1.add(arr.get(i));
        }
        for (int i = k; i < n; i++) {
            arr2.add(arr.get(i));
        }

        if (arr1.contains(fav) && arr2.contains(fav)) {
            return "MAYBE";
        } else if (arr2.contains(fav)) {
            return "NO";
        } else {
            return "YES";
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        String arr[] = new String[t];

        for (int i = 0; i < t; i++) {
            int n, f, k;
            n = sc.nextInt();
            f = sc.nextInt();
            k = sc.nextInt();
            ArrayList<Integer> cubes = new ArrayList<Integer>();
            for (int j = 0; j < n; j++) {
                cubes.add(sc.nextInt());
            }
            arr[i] = solve(n, f, k, cubes);
        }

        for (int i = 0; i < t; i++) {
            System.out.println(arr[i]);
        }
    }
}

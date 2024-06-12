import java.util.*;

public class firstsorting {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int res1[] = new int[t];
        int res2[] = new int[t];

        for (int k = 0; k < t; k++) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            res1[k] = Math.min(x, y);
            res2[k] = Math.max(x, y);

        }

        for (int i = 0; i < t; i++) {
            System.out.println(res1[i] + " " + res2[i]);
        }
    }
}

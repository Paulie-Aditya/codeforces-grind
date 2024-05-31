import java.util.*;

public class stones {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s.charAt(i) == s.charAt(i + 1)) {
                ans++;
            }
        }
        System.out.print(ans);

        sc.close();
    }
}

import java.util.*;

public class translate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        sc.close();
        int n = s.length();
        if (t.length() != n) {
            System.out.println("NO");
            return;
        }

        for (int i = 0; i < n; i++) {
            if (s.charAt(i) != t.charAt(n - 1 - i)) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");

    }
}
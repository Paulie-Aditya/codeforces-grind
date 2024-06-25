import java.util.*;

public class bitplusplus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        int x = 0;

        for (int i = 0; i < n; i++) {
            String s = sc.nextLine();
            if (s.charAt(0) == '-' || s.charAt(1) == '-' || s.charAt(2) == '-') {
                x--;
            } else {
                x++;
            }
        }
        System.out.println(x);
        sc.close();
    }
}

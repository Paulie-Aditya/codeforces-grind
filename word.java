import java.util.*;

public class word {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int n = s.length();
        int lo = 0;
        int up = 0;

        for (int i = 0; i < n; i++) {
            if (s.charAt(i) - 'A' >= 0 && s.charAt(i) - 'A' < 26) {
                up++;
            } else {
                lo++;
            }
        }
        if (lo > up || lo == up) {
            s = s.toLowerCase();
            System.out.println(s);
        } else {
            s = s.toUpperCase();
            System.out.println(s);
        }
    }
}
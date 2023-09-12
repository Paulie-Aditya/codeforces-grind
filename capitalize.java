import java.util.*;

public class capitalize {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        if (s.charAt(0) - 'A' >= 0 && s.charAt(0) - 'A' < 26) {
            System.out.println(s);
        } else {
            // s.charAt(0) = s.charAt(0) - ('A' - 'a');
            String y = s.substring(1, s.length());
            s = s.toUpperCase();
            char x = s.charAt(0);
            System.out.print(x + y);

        }
    }
}

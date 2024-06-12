import java.util.*;

public class creatingWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int k = 0; k < t; k++) {

            String a = sc.next();
            String b = sc.next();

            System.out.println(b.charAt(0) + a.substring(1) + " " + a.charAt(0) + b.substring(1));

        }
    }
}

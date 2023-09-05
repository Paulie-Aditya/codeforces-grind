import java.util.*;

public class long_words {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        String arr[] = new String[test];
        sc.nextLine();
        for (int i = 0; i < test; i++) {
            String s = sc.nextLine();
            arr[i] = s;
        }

        for (int j = 0; j < test; j++) {
            String s = arr[j];
            int n = s.length();
            if (n <= 10) {
                System.out.println(s);
            } else {
                System.out.println(s.charAt(0) + "" + (n - 2) + "" + s.charAt(n - 1));
            }
        }

        sc.close();

    }
}

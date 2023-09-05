import java.util.*;

public class team {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p = sc.nextInt();
        sc.nextLine();
        int count = 0;
        for (int i = 0; i < p; i++) {
            int n1 = 0;
            for (int j = 0; j < 3; j++) {
                if (sc.nextInt() == 1) {
                    n1++;
                }
            }
            if (n1 >= 2) {
                count++;
            }
        }

        System.out.println(count);
    }
}

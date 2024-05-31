import java.util.*;

public class soldier_banana {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int n = sc.nextInt();
        int w = sc.nextInt();

        int b = 0;
        int i = 1;

        while (w > 0) {

            if (!(n - k * i > 0)) {
                b += -1 * (n - k * i);
                n = 0;
            } else {
                n -= i * k;
            }
            i++;
            w--;
        }

        System.out.println(b);
        sc.close();

    }
}
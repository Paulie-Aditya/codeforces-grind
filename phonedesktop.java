import java.util.*;

public class phonedesktop {

    public static int solve(int x, int y) {
        // total size = 5*3
        // x of 1*1
        // y of 2*2
        // per screen 2 y, 15-(4*y) x

        int screens = 0;
        if (y % 2 == 0)
            screens = y / 2;
        else
            screens = y / 2 + 1;

        x -= 15 * screens - (4 * y);

        while (x > 0) {
            screens++;
            x -= 15;
        }
        return screens;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        int res[] = new int[t];

        for (int k = 0; k < t; k++) {

            int x = sc.nextInt();
            int y = sc.nextInt();

            res[k] = solve(x, y);
        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}

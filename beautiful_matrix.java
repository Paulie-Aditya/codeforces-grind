import java.util.*;

public class beautiful_matrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ans = 0;
        // Middle is 3,3
        for (int i = 1; i < 6; i++) {
            for (int j = 1; j < 6; j++) {
                if (sc.nextInt() == 1) {
                    ans = Math.abs(3 - i) + Math.abs(3 - j);
                }
            }
        }
        System.out.println(ans);
        sc.close();
    }
}

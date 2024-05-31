import java.util.*;

public class two_buttons {

    public static int solve(int n, int m) {
        int ans = 0;
        if (n == m) {
            return 0;
        }

        if (n > m) {
            // doubling can't be done
            return n - m;
        }

        while (m > n) {
            // m->n , divide by 2 or add 1
            if ((m & 1) == 1) { // odd
                m += 1;
                ans++;
            } else {
                m = m >> 1;
                ans++;
            }
        }
        if (m == n)
            return ans;
        else
            return ans + (n - m);

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m;
        n = sc.nextInt();
        m = sc.nextInt();

        // Starting number is n
        // to get m

        // red button to multiply by 2
        // blue to subtract by 1

        int ans = solve(n, m);
        System.out.println(ans);
    }
}

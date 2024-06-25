import java.util.*;

public class turtle {

    public static int primeFactors(int n) {
        // Print the number of 2s that divide n
        int count = 0;
        while ((n & 1) == 0) {
            count++;
            n = n >> 1;
        }

        // n must be odd at this point. So we can
        // skip one element (Note i = i +2)
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            // While i divides n, print i and divide n
            while (n % i == 0) {
                count++;
                n /= i;
            }
        }

        // This condition is to handle the case when
        // n is a prime number greater than 2
        if (n > 2)
            count++;
        return count;
    }

    public static int solve(int l, int r) {
        int maxi = 0;
        for (int val = l; val <= r; val++) {
            maxi = Math.max(maxi, primeFactors(val));
        }
        return maxi;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int res[] = new int[t];

        for (int i = 0; i < t; i++) {
            int l, r;
            l = sc.nextInt();
            r = sc.nextInt();

            // choose x in between l and r
            // max primes in number in range
            res[i] = solve(l, r);
        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}

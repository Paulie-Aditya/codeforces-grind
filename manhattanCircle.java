import java.util.*;

public class manhattanCircle {

    static class pair {
        int x = 0;
        int y = 0;

        pair(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        pair[] res = new pair[t];

        for (int k = 0; k < t; k++) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            int[][] mat = new int[n][m];

            int maxi = 0;
            pair ans = new pair(0, 0);
            for (int i = 0; i < n; i++) {
                int count = 0;
                int firstOcc = 0;
                String curr = sc.next();
                for (int j = 0; j < m; j++) {
                    mat[i][j] = curr.charAt(j);
                    if (mat[i][j] == '#') {
                        if (count == 0)
                            firstOcc = j;
                        count++;
                    }

                }
                if (count > maxi) {
                    maxi = count;
                    ans.x = i + 1;
                    ans.y = firstOcc + count / 2 + 1;
                }
                maxi = Math.max(maxi, count);
            }

            res[k] = ans;
        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i].x + " " + res[i].y);
        }

    }
}

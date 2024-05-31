import java.util.*;

public class panagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int arr[] = new int[26];

        for (int i = 0; i < n; i++) {
            char curr = s.charAt(i);
            if (curr >= 'a' && curr <= 'z')
                arr[curr - 'a'] = 1;
            else
                arr[curr - 'A'] = 1;
        }

        String ans = "YES";
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                ans = "NO";
                break;
            }
        }
        System.out.println(ans);

    }
}

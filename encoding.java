import java.util.*;

public class encoding {
    public static String solve(String str, int n) {
        HashMap<Character, Boolean> map1 = new HashMap<>();

        // get distinct letters, sort in descending order , make map, decode
        String ans = "";
        for (int i = 0; i < n; i++) {
            char curr = str.charAt(i);
            if (!map1.containsKey(curr)) {
                ans += curr;
                map1.put(curr, true);
            }
        }
        char tempArray[] = ans.toCharArray();
        Arrays.sort(tempArray);

        HashMap<Character, Character> map2 = new HashMap<>();
        int n1 = tempArray.length;
        int st = 0;
        int e = n1 - 1;

        while (st <= e) {
            char curr1 = tempArray[st++];
            char curr2 = tempArray[e--];

            map2.put(curr2, curr1);
            map2.put(curr1, curr2);

        }
        String res = "";

        for (int i = 0; i < n; i++) {
            res += map2.get(str.charAt(i));
        }

        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String res[] = new String[t];

        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            String str = sc.next();
            res[i] = solve(str, n);
        }

        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}

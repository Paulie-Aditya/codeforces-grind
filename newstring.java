import java.util.*;

public class newstring {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        ArrayList<String> res = new ArrayList<>();

        for (int k = 0; k < t; k++) {
            String str = sc.next();

            boolean onlyOne = true;
            for (int i = 0; i < str.length(); i++) {
                if (str.charAt(0) != str.charAt(i)) {
                    onlyOne = false;
                    break;
                }
            }

            if (onlyOne) {
                res.add("NO");
            } else {
                res.add("YES");
                // char[] temp1 = str.toCharArray();
                // Arrays.sort(temp1);

                // String temp2 = temp1.toString();
                char[] temp1 = str.toCharArray();
                // Arrays.sort(temp1);
                String temp2 = temp1.toString();
                res.add(temp1.toString());
                // if (temp2.equals(str)) {
                // // reverse the string
                // int st = 0;
                // int n = temp2.length();
                // int e = n - 1;
                // while (st <= e) {
                // char curr = temp1[st];
                // temp1[st] = temp1[e];
                // temp1[e] = curr;
                // st++;
                // e--;
                // }
                // temp2 = temp1.toString();
                // res.add(temp2);
                // } else {
                // res.add(temp2);
                // }
            }
        }

        for (int i = 0; i < res.size(); i++) {
            System.out.println(res.get(i));
        }

    }
}

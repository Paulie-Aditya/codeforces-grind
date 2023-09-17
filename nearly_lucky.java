import java.util.*;

public class nearly_lucky {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '4' || s.charAt(i) == '7') {
                count++;
            }
        }

        boolean flag = true;

        if (count == 0) {
            flag = false;
        }
        while (count > 0) {
            if (!(count % 10 == 4 || count % 10 == 7)) {
                flag = false;
                break;
            }
            count = count / 10;
        }

        if (flag) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

    }
}
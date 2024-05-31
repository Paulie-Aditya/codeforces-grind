import java.util.*;

public class helpful_maths {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();
        ArrayList<Integer> arr = new ArrayList<>();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '1') {
                arr.add(1);
            } else if (s.charAt(i) == '2') {
                arr.add(2);
            } else if (s.charAt(i) == '3') {
                arr.add(3);
            }

        }
        Collections.sort(arr);
        StringBuilder to_return = new StringBuilder("");
        for (int i = 0; i < arr.size(); i++) {
            to_return.append(arr.get(i));
            to_return.append('+');
        }
        to_return.deleteCharAt(s.length());

        System.out.println(to_return.toString());

    }
}
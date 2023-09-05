import java.util.*;

public class petya {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();

        int n = s1.length();
        s1 = s1.toLowerCase();
        s2 = s2.toLowerCase();   

        for(int i = 0; i<n; i++){
            char c1 = s1.charAt(i);
            char c2 = s2.charAt(i);
            if(!(c1 == c2)){
                if(c1-'a' > c2- 'a'){
                    System.out.println(1);
                }
                else{
                    System.out.println(-1);
                }

                return;
            }
  
        }
        System.out.println(0);  
}
}

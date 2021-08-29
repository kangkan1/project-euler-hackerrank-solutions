import java.util.Scanner;

public class Solution13 {

    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long sum = 0;
        while(t-->0){
            long n = Long.parseLong(sc.next().substring(0, 14));
            sum += n;
        }
        String s = String.valueOf(sum);
        System.out.println(s.substring(0,10));
    }
}

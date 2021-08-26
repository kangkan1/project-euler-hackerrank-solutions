import java.util.Scanner;

public class Solution6 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            long sum1 = (long)n*(n+1)/2;
            long sum2 = (long)n*(n+1)*(2*n+1)/6;
            System.out.println(sum1*sum1-sum2);
        }
    }
}

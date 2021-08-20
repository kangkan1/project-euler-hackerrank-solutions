import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0)
        {
            int n = in.nextInt();
            int a = (n-1)/3;
            int b = (n-1)/5;
            int c = (n-1)/15;
            System.out.println((long)3*a*(a+1)/2+(long)5*b*(b+1)/2-(long)15*c*(c+1)/2);
            //long, because this may result in integer overflow
        }
    }
}
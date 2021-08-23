import java.util.Scanner;

public class Solution7 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int num = 1;
            for(int i=2;i<=n;i++){
                num = num*i/hcf(num, i);
            }
            System.out.println(num);
            
        }
        //System.out.println(lcm(10, 15));
    }
    public static int hcf(int a, int b)
    {
        if (a == 0)
            return b;
        return hcf(b % a, a);
    }
}

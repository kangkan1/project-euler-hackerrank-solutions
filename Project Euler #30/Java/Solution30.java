import java.util.Scanner;

public class Solution30 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for(int i=100;i<1000000;i++) {
            int num = i;
            int temp = 0;
            while(num>0) {
                temp += (int)Math.pow(num%10, n);
                num /=10;
            }
            if(temp == i) {
                sum+=i;
            }
        }
        System.out.println(sum);
    }
}

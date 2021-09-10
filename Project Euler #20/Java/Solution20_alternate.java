import java.util.Scanner;
import java.math.BigInteger;

public class Solution20_alternate {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t-- >0){
            int n = sc.nextInt();
            BigInteger b1 = new BigInteger("1");
            for(int i=2;i<=n;i++){
                b1 = b1.multiply(new BigInteger(i+""));
            }
            String s = b1.toString();
            int sum = 0;
            for(int i=0;i<s.length();i++) {
                sum = sum+(s.charAt(i)-'0');
            }
            System.out.println(sum);
        }
    }
}


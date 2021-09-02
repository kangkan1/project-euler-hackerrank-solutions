import java.math.BigInteger;
import java.util.Scanner;

public class Solution15 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            BigInteger mul1 = new BigInteger("1");
            BigInteger mul2 = new BigInteger("1");
            BigInteger mul3 = new BigInteger("1");
            int n = sc.nextInt();
            int m = sc.nextInt();
            for(int i=2;i<=n;i++){
                mul1 = mul1.multiply(new BigInteger(i+""));
            }
            for(int i=2;i<=m;i++){
                mul2 = mul2.multiply(new BigInteger(i+""));
            }
            for(int i=2;i<=n+m;i++){
                mul3 = mul3.multiply(new BigInteger(i+""));
            }
            mul1 = mul1.multiply(mul2);
            mul3 = mul3.divide(mul1);
            mul3 = mul3.mod(new BigInteger(1000000007+""));
            System.out.println(mul3.toString());
        }
        
    }
}
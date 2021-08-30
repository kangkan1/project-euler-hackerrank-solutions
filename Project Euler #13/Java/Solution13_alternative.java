import java.util.Scanner;
import java.math.*;

public class Solution13_alternative {

    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        BigInteger sum = new BigInteger("0");
        while(t-- >0){
            BigInteger n = new BigInteger(sc.next());
            
            sum = sum.add(n);
            //System.out.print(sum.toString());
        }
        System.out.print(sum.toString().substring(0,10));
    }
}

import java.util.Scanner;

public class Solution3 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0){
            long n = in.nextLong();
            long max_prime = 2;
            while(n%2 == 0){
                n /= 2;
            }
            long i = 3;
            while(i*i <= n){
                while(n%i == 0){
                    max_prime = i;
                    n /= i;
                }
                i = i + 2;
            }
            if(max_prime > n)
                System.out.println(max_prime);
            else
                System.out.println(n); 
        }
    }
}    
    

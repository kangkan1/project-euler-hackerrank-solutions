import java.util.Scanner;

public class Solution27 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int A = 0;
        int B = 0;
        int ans = 0;
        for(int i=-n;i<=n;i++){
            for(int j=-n;j<=n;j++){
                int k = 0;
                int prime = 0;
                for(k=0;;k++){
                    if(isPrime(k*k+i*k+j)){
                        prime++;
                    }else{
                        break;
                    }
                }
                if(prime > ans){
                    ans = prime;
                    A = i;
                    B = j;
                }
                if(ans >= n){
                    i = n+1;
                    j = n+1;
                }
            }
        }
        System.out.println(A+" "+B);
        

    }
    public static boolean isPrime(int n){
        if(n < 2) return false;
        if(n==2 || n == 3)
            return true;
        if(n%2 == 0 || n%3 == 0)
            return false;    
        for(int i=5;i*i<=n;i=i+6){
            if(n%i == 0 || n%(i+2)== 0){
                return false;
            }
        }
        return true;
    }
}
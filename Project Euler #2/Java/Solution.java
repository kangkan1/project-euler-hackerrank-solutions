import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            long n, f,f1,f2,sum;
            n = in.nextLong();
            f1=0;
            f2=1;
            f=f1+f2;
            sum=0;
            while(f<n){
                if(f%2 == 0){ 
                    sum += f;
                }
                f1 = f2;
                f2 =f;
                f = f1+f2;
            }
            System.out.println(sum);
        }
    }
}
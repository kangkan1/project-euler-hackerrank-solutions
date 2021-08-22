import java.util.Scanner;
public class Solution9 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t  = sc.nextInt();
        int b,c,large=0;
        int n;
        while(t-->0){
            n = sc.nextInt();
            large=0;
            for(int i=3;i<=n/3;i++){
                b=(n*n-2*n*i)/(2*n-2*i);
                c=n-i-b;
                if(i*i+b*b==c*c && i+b+c==n){
                    if(i*b*c>large) large=i*b*c;
                }           
            }
            if(large!=0) System.out.println(large);
            else System.out.println("-1");
            }   
        }
        
    }


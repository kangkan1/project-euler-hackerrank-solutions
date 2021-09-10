import java.util.Scanner;

public class Solution20 {

    public static void main(String[] args) {    
        Scanner sc = new Scanner(System.in);
        int t;
        int[] a = new int[3000];
        int n,i,j,temp,m,x;
        int sum =0;
        t=sc.nextInt();
        while(t-->0){
           n=sc.nextInt();
           a[0]=1;  
           m=1;    
           temp = 0; 
           for(i=1;i<=n;i++){
                for(j=0;j<m;j++){
                   x = a[j]*i+temp; 
                   a[j]=x%10; 
                   temp = x/10; 
                }
                while(temp>0) { 
                   a[m]=temp%10;
                   temp = temp/10;
                   m++; 
                }
            }
        sum=0;
        for(i=m-1;i>=0;i--) 
        sum+=a[i];
        System.out.println(sum);      
        }
    }
}
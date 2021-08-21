import java.util.Scanner;


public class Solution7 {

    public static void main(String[] args) {
        int[] arr = new int[10000];
        arr[0] =2;
        arr[1] =3;
        int count=2, i=5;
        boolean flag;
        while(count<10000)
            {
            flag = isPrime(i);
            if(flag)
                {
                arr[count] = i;
                count++;
            }
            i=i+2;     
        }
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t>0){
            int n = sc.nextInt();
            System.out.println(arr[n-1]);    
            t--;
        }     
    }
    public static boolean isPrime(int n){
        if(n<=1)
            return false;
        if(n==2 || n==3)
            return true;
        if(n%2 == 0 || n%3 == 0)
            return false;
        for(int i=5;i*i<=n;i=i+6){
            if(n%i == 0 || n%(i+2) == 0)
                return false;
        }
        return true;            
    }
}

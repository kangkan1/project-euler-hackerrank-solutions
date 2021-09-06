import java.util.Scanner;

public class Solution18 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- >0){
            int n = sc.nextInt();
            int [][]arr = new int[n][n];
            int j = 0;
            for(int i=0;i<n;i++){
                for(int k=0;k<=j;k++)
                    arr[i][k] = sc.nextInt();
                    j++;
            }
            for(int i=n-2;i>=0;i--){
                for(int k=0;k<=i;k++){
                    arr[i][k] += Math.max(arr[i+1][k], arr[i+1][k+1]);
                }
            }
            System.out.println(arr[0][0]);
        }
    }
}

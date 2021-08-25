import java.util.Scanner;

public class Solution8 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            int k = in.nextInt();
            String s = in.next();
            int max = 0, pro = 1;
            for(int i=0;i<n-k;i++){
                pro=1;
                for(int j=i;j<(i+k);j++){
                    int num = Character.getNumericValue(s.charAt(j));
                    pro *=num;
                }
                max = pro>max?pro:max;
            }
            System.out.println(max);
        }
    }
}
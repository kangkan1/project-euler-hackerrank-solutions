import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Solution4 {

    public static void main(String[] args) {
        ArrayList<Integer> al = new ArrayList<Integer>();
        for(int i=100;i<1000;i++){
            for(int j=143;j<1000;j++){
                int num = i*j;
                int n = num;
                int rev = 0;
                while(n!=0){
                    rev = rev*10 + n%10;
                    n=n/10;
                }
                if(rev == num && num>=101101){
                    al.add(num);
                }
            }
        }
        Collections.sort(al);
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            for(int i=al.size()-1;i>-1;i--){
                if(n>al.get(i)){
                    System.out.println(al.get(i));
                    break;
                }   
            }
        }
    }
    
}

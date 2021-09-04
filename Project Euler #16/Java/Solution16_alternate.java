import java.util.Scanner;
import java.math.BigInteger;

public class Solution16_alternate {
	public static void main(String[] args) {
		/* 
			This is a alternate solution to problem 16
			Here we have used bit manupulation to achieve the power of 2
			decimal - binary 
			2 		- 10
			4 		- 100
			8 		- 10000
			16 		- 100000
			Hence bitswise left shift can be used to calculate 
			powers of 2 in O(1) time complexity. 
			However this can only be done till 2^62. After 2^62
			we can directly use StringBuilder to construct powers
			of 2.

		*/
		int []sum = new int[10001];
		int j = 1;
		long temp = 0;
		for(int i=1;i<63;i++) {
			long num = (long)1<<i; // bitwise manupulation, left shift
			temp = 0;
			while(num>0) {
				temp = temp+(int)(num%10);
				num/=10;
			}
			sum[j++] = (int)temp;
		}
		//int temp1=0;
		for(int i=63;i<=10000;i++) {
			StringBuilder sb = new StringBuilder("1");
			for(int k=0;k<i;k++) {
				sb.append("0");
			}
			BigInteger b = new BigInteger(sb.toString(), 2);
			String s = b.toString();
			temp = 0;
			for(int k=0;k<s.length();k++) {
				temp = temp +(s.charAt(k)-'0');
			}
			sum[j++] = (int) temp;
		}
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		while(t-- >0){
			int n=sc.nextInt();
		    System.out.println(sum[n]);         
		}
	}
}
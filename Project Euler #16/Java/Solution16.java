import java.util.Scanner;
import java.math.BigInteger;

public class Solution16 {
	public static void main(String[] args) {
		int n, temp, m, x, sum1=0, t;
		int sum[] = new int[10001];
		int a[] = new int[1000000];
		a[0] =1;
		m=1;
		temp=0;
		for(int i=1;i<=10000;i++){
			for(int j=0;j<m;j++){
				x = a[j]*2+temp; 
		        a[j]=x%10; 
		        temp = x/10; 
		    }
		    while(temp>0) { 
		    	a[m]=temp%10;
		        temp = temp/10;
		        m++; 
		    }
		    sum1=0;
		    for(int k=m-1;k>=0;k--){       
		    	sum1=sum1+a[k];
		    }
		    sum[i] =sum1;
		}           
		Scanner sc = new Scanner(System.in);
		t= sc.nextInt();
		while(t-- >0){
			n=sc.nextInt();
		    System.out.println(sum[n]);         
		}
	}
	
}
package main;
import java.util.Scanner;
public class method_04{

	public static int min(int a,int b) {
		if(a>b) {
		return(a-b);}
	else {
		return(b-a);
		}}
		
		public static int sum(int a,int b) {
		return( a+b);
		}
	
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int q=input.nextInt();
		int w=input.nextInt();
		int sum,min;
		sum=sum(q,w);
		min= min(q,w);
		System.out.printf("두 수의 합 = %d\n두 수의 차 = %d",sum,min);

	}
}
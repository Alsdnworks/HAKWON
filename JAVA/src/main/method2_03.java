package main;
import java.util.Scanner;
public class method2_03{

	public static int imin(int a,int b) {
		return(Math.abs(a-b));
		}	
	public static double dmin(double a,double b) {
		return(Math.abs(a-b));
		}	
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int a=input.nextInt();
		int b=input.nextInt();
		double c=input.nextDouble();
		double d=input.nextDouble();
		int imin;
		double dmin;
		imin=imin(a,b);
		dmin= dmin(c,d);
		System.out.printf("두 정수의 차 : %d\n두 실수의 차 : %f",imin,dmin);

	}
}
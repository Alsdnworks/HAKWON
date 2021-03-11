/*패키지
(임포트-인클루드)
클래스
메인객체*/

package main;
import java.util.Scanner;
public class Cont_Stat02{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		int t;
		int a= input.nextInt();
		int b=input.nextInt();
		if (a<b)
		{
			t=a;
			a=b;
			b=t;
		}
		System.out.printf("입력받은 수 중 큰 수는 %d작은수는%d", a,b);
		}
}
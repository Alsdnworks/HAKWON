/*패키지
(임포트-인클루드)
클래스
메인객체*/

package main;
import java.util.Scanner;
public class Cont_Stat01{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		int a= input.nextInt();
		System.out.printf("%d\n", a);
		if (a>10)
		{
			System.out.printf("10보다큰수");
		}
	}
}
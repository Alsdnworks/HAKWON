/*��Ű��
(����Ʈ-��Ŭ���)
Ŭ����
���ΰ�ü*/

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
		System.out.printf("�Է¹��� �� �� ū ���� %d��������%d", a,b);
		}
}
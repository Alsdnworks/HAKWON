package main;
import java.util.Scanner;
public class Cont_Stat03{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		System.out.printf(""
				+ "1.��\n"
				+ "2.�����\n"
				+ "3.����\n");
		int i=input.nextInt();
		switch(i) {
		case 1: System.out.println("��");
		break;
		case 2: System.out.println("Ĺ");
		break;
		case 3: System.out.println("��Ʈ");
		break;
		default :System.out.println("�νĺҰ�");
		break;
		}
	}
}
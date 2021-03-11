package main;
import java.util.Scanner;
public class Cont_Stat03{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		System.out.printf(""
				+ "1.개\n"
				+ "2.고양이\n"
				+ "3.개미\n");
		int i=input.nextInt();
		switch(i) {
		case 1: System.out.println("독");
		break;
		case 2: System.out.println("캣");
		break;
		case 3: System.out.println("앤트");
		break;
		default :System.out.println("인식불가");
		break;
		}
	}
}
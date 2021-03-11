package main;
import java.util.Scanner;

class nke{
	String name;
	int ks ;
	int es;
	nke(String na,int ko, int en){
		name=name;
		ks=ks;
		es=es;
	}
	
	void scorecalc()
	{
		System.out.println(name+" "+ks+" "+es);		
	}
}

public class obj_03 {
	public static void main(String[]args) {
Scanner input=new Scanner(System.in);

nke a = new nke(input.next(), input.nextInt(), input.nextInt());
nke b = new nke(input.next(), input.nextInt(), input.nextInt());
nke sum = new nke("гу╟Х",a.ks+b.ks,a.es+b.es) ;

a.scorecalc();
b.scorecalc();
sum.scorecalc();
	}
}

package main;
import java.util.Scanner;
 public class Arg_07{
	 public static void main(String[] args)
	 {
		Scanner input=new Scanner(System.in);
		int []num= new int[12];
		int i,t;
		t=0;
		num[0]=0;
		for(i=1; i<11;i++){num[i]=input.nextInt();}
		for(i=1; i<11;i++) {if(num[i]>t) {t=num[i];}}
		System.out.printf("%d",t );
	 } 
 }
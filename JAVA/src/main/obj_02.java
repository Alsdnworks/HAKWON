package main;
import java.util.Scanner;
 class student{
	 String name;
	 int age;
	 
	 void set(String na,int ag) {
		 name=na;
		 age=ag;
	 }
	 
	 void out() {
		 System.out.printf("이름은%s 나이는%d",name,age);
	 }
 }
 public class obj_02{
	 public static void main(String[] args)
	 {
		 Scanner input=new Scanner(System.in);
		 student orig= new student();
		 orig.set("qwer",23);
		 student me= new student();
		 me.set(input.next(),input.nextInt());
		 orig.out();
		 me.out();

	 }
 }
	
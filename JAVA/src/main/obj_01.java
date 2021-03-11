package main;
import java.util.Scanner;
 class student{
	 String name;
	 int age;
 }
 public class obj_01{
	 public static void main(String[] args)
	 {
		 Scanner input=new Scanner(System.in);
		 student self = new student();
		 System.out.printf("이름");
		 self.name = input.next();
		 System.out.printf("나이");
		 self.age = input.nextInt();	 
		 System.out.printf("이름은%s 나이는%d",self.name,self.age);
	 }
 }
	
  
package main;
import java.util.Scanner;

 public class obj_01{
	 public static void main(String[] args)
	 {
		 Scanner input=new Scanner(System.in);
		 student self = new student();
		 System.out.printf("");
		 self.name = input.next();
		 System.out.printf("");
		 self.age = input.nextInt();	 
		 System.out.printf("%s %d",self.name,self.age);
	 }
 }  
	
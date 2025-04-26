package calculator;

import java.util.Scanner;

public class Objecr1 {
	public static void main(String a[]) {
		Scanner s=new Scanner(System.in);
		System.out.println("enter two numbers");
		int number1=s.nextInt();
		int number2=s.nextInt();
		System.out.println("1.Addition");
		System.out.println("2.subtraction");
		System.out.println("3.multiplication");
		System.out.println("4.division");
		Calculator ip=new Calculator();
		int choice=s.nextInt();
		if(choice==1) {
			ip.addition(number1,number2);
		}else if(choice==2){
			ip.subtraction(number1,number2);
		}else if(choice==3) {
			ip.multiplication(number1, number2);
		}else if(choice==4) {
			ip.division(number1, number2);
		}else{
			System.out.println("does not exist");
		}
		
	}

}

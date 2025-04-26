package ifsample;

import java.util.Scanner;

public class IfSample {
	public static void main(String arr[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter a limit");
		int num1=sc.nextInt();
		if(num1<0) {
			System.out.println("number is negative");
		}else {
			System.out.println("number is positive");
		}
	}

}

package add;

import java.util.Scanner;

public class Add {
	public static void main(String arr[]) {
		Scanner s=new Scanner(System.in);
		System.out.println("enter two numbers");
		int a=s.nextInt();
		int b=s.nextInt();
		int c=a+b;
		
		System.out.println("result:"+c);
	}

}

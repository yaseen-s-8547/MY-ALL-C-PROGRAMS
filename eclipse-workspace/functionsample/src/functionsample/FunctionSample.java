package functionsample;

import java.util.Scanner;

public class FunctionSample {
public static void main(String a[]) {
	Scanner nums=new Scanner(System.in);
	System.out.println("enter two numbers");
	int num1=nums.nextInt();
	int num2=nums.nextInt();
	int result=sum(num1,num2);
	System.out.println("result:"+result);
}

static int sum(int one, int two) {
	int sum=one+two;
	return sum;
			
}
}

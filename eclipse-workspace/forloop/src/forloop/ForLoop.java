package forloop;

import java.util.Scanner;

public class ForLoop {
public static void main(String arr[]) {
	Scanner lmt=new Scanner(System.in);
	System.out.println("enter a limit");
	int num=lmt.nextInt();
	
	int sum=0;
	if(num>0) {
		for(int i=0;i<num;i++) {
			sum=sum+i;
		}System.out.println("result :"+sum);
	}else {
		System.out.println("entered number is negative");
	}
}

}

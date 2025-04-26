import java.util.Scanner;

public class OBJECT {
	public static void main(String a[]) {
		
		Scanner s=new Scanner(System.in);
		System.out.println("enter values");
		int num1=s.nextInt();
		int num2=s.nextInt();
		Sumfunction s1=new Sumfunction();
		s1.calculatesum(num1, num2);
		s1.displaysum();
	}

}


public class B extends A {
	int a;
	B(){
		System.out.println("its a B CONSTRUCTOR");
	}
	B(int a){
		super(100);
		System.out.println("ITS ARGUEMENT B");
	}
	void display() {
		System.out.println("ITS B");
		a=20;
		super.a=35;
		int c=a+super.a;
		System.out.println(c);
		
		
		
		
		
	}
	void confusionresolvement() {
		super.display();
	}
	
public static void main(String[] args) {
	B b=new B(10);
 // b.confusionresolvement();
	//b.display();
}
}

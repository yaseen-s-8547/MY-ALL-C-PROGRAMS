
public class Printer implements Helper {
	void ontext(String text) {
		System.out.println(text);
	}
	Printer(){
		Scanner s=new Scanner(this);
		s.scan();
		
	}
	
public static void main(String[] args) {
	Printer printer=new Printer();
}
}

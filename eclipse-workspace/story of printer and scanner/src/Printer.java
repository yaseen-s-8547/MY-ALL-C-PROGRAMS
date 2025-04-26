
public class Printer extends Helper {
	void ontext(String text) {
		System.out.println(text);
	}
	Printer(){
		Scanner scanner=new Scanner(this);
		scanner.scan(); 
		
	}
public static void main(String[] args) {
	Printer printer=new Printer();
}
}   


public class CallingThread {
 public static void main(String[] args) {
	 
	 SampleThread st=new SampleThread(0);
	 Thread t=new Thread(st);
	t.start();
	 SampleThread st1=new SampleThread(1);
	 Thread t1=new Thread(st1);
	 SampleThread st2=new SampleThread(2);
	 Thread t2=new Thread(st2);
	 
	 SampleThread st3=new SampleThread(3);
	 Thread t3=new Thread(st3);
	    t1.start();
	    t2.start();
	    t3.start();
	
}

}

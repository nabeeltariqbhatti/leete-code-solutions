package demo2;

import java.util.*;

public class Worker {

	
	private static Random random =new Random();
	private static List<Integer> list1= new ArrayList<Integer>();
	private static List<Integer> list2= new ArrayList<Integer>();
	
	public static Object lock1=new Object();
	public static  Object lock2=new Object();
	public static synchronized void stageOne(){
		synchronized(lock1) {
			try {
				Thread.sleep(1);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			list2.add(random.nextInt(100));
			
		}
		
	}
	
	public static void stageTwo() {
		synchronized(lock2) {
			try {
				Thread.sleep(1);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			list1.add(random.nextInt(100));
		}
	
		
	}
	
	public static void process() {
		for (int i=0; i<1000;i++) {
			stageOne();
			stageTwo();
		}
	}
	public static void main() {
		
System.out.print("Hello world");

long start =System.currentTimeMillis();


Thread t1=new Thread(new Runnable() {
	

	
	public void run() {
		// TODO Auto-generated method stub
		process();
	}
});

Thread t2=new Thread(new Runnable() {
	

	
	public void run() {
		// TODO Auto-generated method stub
		process();
	}
});
t1.start();
t2.start();

try {
	t1.join();
	t2.join();
} catch (InterruptedException e) {
	// TODO Auto-generated catch block
	e.printStackTrace();
}

long end=System.currentTimeMillis();

System.out.println("Time Taken:" + (end-start));
System.out.println("list1"+" "+  list1.size()+" "+ "list2" + " "+list2.size());
	}
	
	

}

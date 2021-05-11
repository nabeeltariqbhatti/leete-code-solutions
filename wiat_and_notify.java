package producerconsumer2;

public class App {

	public static void main(String[] args) {
		final Processor processor = new Processor();
		Thread t1=new Thread(new Runnable() {

			@Override
			public void run() {
				try {
					processor.producer();
				}catch (Exception e) {
					System.out.println(e);
				}
				
				
			}
			
		});
		Thread t2=new Thread(new Runnable() {

			@Override
			public void run() {
				try {
					processor.consumer();
				}catch (Exception e) {
					System.out.println(e);
				}
				
				
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
	
		
	}

}


package producerconsumer2;

import java.util.Scanner;

public class Processor {
	public void producer() throws InterruptedException {
		synchronized (this) {
			System.out.println("Producer Thread Running .....");
			wait();
			System.out.println("Resumed...");
			
		}
		
	}
public void consumer() throws InterruptedException {
	Scanner scanner=new Scanner(System.in);
	Thread.sleep(2000);
	synchronized (this) {
		System.out.println("Waiting for the Key ...");
		scanner.nextLine();
		System.out.println("Returned Key is Pressed ...");
		notify();
		Thread.sleep(5000);
		
		
	}
}
}

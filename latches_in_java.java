package bhatti.com.example;

import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

class Processor1 implements Runnable{

	private CountDownLatch latches;
	public Processor1(CountDownLatch latches){
		this.latches=latches;
	}
	
	public void run() {
		
		System.out.println("Started... :");
		
		
		try {
			Thread.sleep(3000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		latches.countDown();
		 
		
	}
	
	
}

public class App {

	public static void main(String[] args) {
		
		CountDownLatch latch=new CountDownLatch(3);
		ExecutorService executor= Executors.newFixedThreadPool(3);
		for (int i=0; i<5; i++) {
			executor.submit(new Processor1(latch));
		}
		try {
			latch.await();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		System.out.println("Completed..");
	}

}

package consumerproducer;

import java.util.Random;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;

public class App {
	
	private static BlockingQueue<Integer> queue= new ArrayBlockingQueue(10);

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Thread t1= new Thread(new Runnable() {

			@Override
			public void run() {
				try {
					producer();
				}catch (Exception e) {
					e.printStackTrace();
				}
				
				
			}
			
		});
		
		Thread t2= new Thread(new Runnable() {

			@Override
			public void run() {
				try {
					consumer();
				}catch (Exception e) {
					e.printStackTrace();
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
	
	
	
	


	
	private static void  producer() {
		Random random = new Random();
		while(true) {
			try {
				queue.put(random.nextInt(100));
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	private static void consumer()
	{
		Random random = new Random();
		
		while(true) {
			try {
				Thread.sleep(100);
				if(random.nextInt(10)==0) {
					Integer value=queue.take();
					System.out.println("Taken Value :" + value + "; Queue Size is : " + queue.size());
				}
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}

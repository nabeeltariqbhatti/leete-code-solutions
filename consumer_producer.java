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

//low leve synchronization with lock object
package producerconsumer2;

import java.util.LinkedList;
import java.util.Random;
import java.util.Scanner;

public class Processor {
	private LinkedList<Integer> list=new LinkedList<Integer>();
	private int LIMIT=10;
	private Object lock=new Object();
	public void producer() throws InterruptedException {
		int value=0;
		while(true) {
			synchronized (lock) {
				while(list.size()==LIMIT) {
					lock.wait();
				}
				list.add(value++);
				lock.notify();
			}
		
		}
		
		
	}
public void consumer() throws InterruptedException {
	Random random=new Random();
	while(true) {
		synchronized (lock) {
			while(list.size()==0) {
				lock.wait();
			}
			System.out.println("Size of List is : "+ list.size());
			int value=list.removeFirst();
			System.out.println("Value removed : " + value);
			lock.notify();
		}
		Thread.sleep(random.nextInt(1000));
	
		
	}
	
		
	}

}


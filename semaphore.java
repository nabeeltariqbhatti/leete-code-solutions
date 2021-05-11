package producerconsumer2;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Semaphore;
import java.util.concurrent.TimeUnit;

public class App {

	public static void main(String[] args) {
		

			
			
			ExecutorService executor=Executors.newCachedThreadPool();
			for(int i=0; i<200; i++) {
				executor.submit(new Runnable() {

					@Override
					public void run() {
						Connection.getInstance().doConnect();
						
					}
					
				});
				
			}executor.shutdown();
			try {
				executor.awaitTermination(1, TimeUnit.DAYS);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		
		
		
	}

}




package producerconsumer2;

import java.util.concurrent.Semaphore;

public class Connection {
	
	
	private Semaphore semaphore =new Semaphore(10);

	
	private static Connection instance=new Connection();
	
	private int connections=0;
	
	private Connection() {
		
	}
	
	public static Connection getInstance() {
		return instance;
	}
	public void doConnect() {
		try {
			semaphore.acquire();
		} catch (InterruptedException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		
		try {
			connect();
		}finally{
			semaphore.release();
		}
	}
	
	public void connect() {
		
		synchronized (this) {
			connections++;
			
			System.out.println("Current Connections : " + connections);
		}
		
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		synchronized(this) {
			connections--;
		}
		semaphore.release();
	}
}

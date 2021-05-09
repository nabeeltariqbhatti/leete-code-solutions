package packageone;



public class Synckeword extends Thread  {
	private int count=0;
	public synchronized void increment() {
		count++;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Synckeword app=new Synckeword();
		app.doWork();
		
		

	}
	
	public void doWork() {
		
		Thread t1=new Thread(new Runnable() {
           public void run() {
		
	         for(int i=0;i<  10000;i++){
	        increment();
	         }
			}
			
		});
		
		Thread t2=new Thread(new Runnable() {
	           public void run() {
			
		         for(int i=0;i<10000;i++){
		        increment();
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
		
		System.out.println("count is :" + count);
	}
	

}

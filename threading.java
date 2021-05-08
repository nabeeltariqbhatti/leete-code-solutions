class Helper implements Runnable
{
    public void run()
    {
    	for (int i=0; i<10; i++) {
    		System.out.println("Hello Java Developer" + i);
    		try {
    			Thread.sleep(100);
    		} catch (InterruptedException e) {
    			// TODO Auto-generated catch block
    			e.printStackTrace();
    		}
    	}
}
}

public class Thread2 {

	
	

	public static void main(String[] args) {
		 
	              
	        Thread thread1 = new Thread(new Helper());
	        Thread thread2 = new Thread(new Helper());
	        thread1.start();
	        thread2.start();
		
		

	}

}

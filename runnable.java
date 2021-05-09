package packageone;

import java.util.Scanner;

class Processor extends Thread{
	public boolean running=true;
	public void run() {
		while(running) {
			System.out.println("Hello Java");
			
			try {
				Thread.sleep(100);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}


	
	public void shutdown(){
		running=false;
	}
}
public class App {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		Processor p = new Processor();
		p.start();
		
        Scanner scanner=new Scanner(System.in);
		scanner.nextLine();
		
		p.shutdown();
		
	}

}

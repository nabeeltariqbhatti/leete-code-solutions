package producerconsumer2;

import java.util.LinkedList;
import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class Processor {
	private Account acc1=new Account();
	private Account acc2= new Account();
	
	private Lock lock1=new ReentrantLock();
	private Lock lock2=new ReentrantLock();
	
	public void firstthread() {
		Random random =new Random();
for(int i=0; i<10000; i++) {
	
			
			lock1.lock();
			lock2.lock();
			try {
				Account.transfer(acc1,acc2,random.nextInt(100));
			}catch (Exception e) {
				System.out.println(e);
			}finally {
				lock1.unlock();
				lock2.unlock();
			}
			
			
			
		}
		
	}
	public void secondthread() {
Random random =new Random();
		
		for(int i=0; i<10000; i++) {
			
			lock1.lock();
			lock2.lock();
			try {
				Account.transfer(acc2,acc1,random.nextInt(100));
			}catch (Exception e) {
				System.out.println(e);
			}finally {
				lock1.unlock();
				lock2.unlock();
			}
			
			
			
		}
		
	}
	 public void finished() {
		System.out.println("Account 1 Bal: "+ acc1.getBlanace());
		
		System.out.println("Account 2 Bal : " + acc2.getBlanace());
		
		System.out.println("Total Bal : " +( acc1.getBlanace() + acc2.getBlanace()));
		
	 }
}

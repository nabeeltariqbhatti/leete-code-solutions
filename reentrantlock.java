package producerconsumer2;

import java.util.LinkedList;
import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class Processor {
	private int count=0;
	
	private Lock lock = new ReentrantLock();
	private Condition cond= lock.newCondition();
	public void increment() {
		for(int i=0; i<10000;i++) {
			count++;
		}
	}
	public void firstthread() {
		lock.lock();
		System.out.println("Waiting ...");
		try {
			cond.await();
			System.out.println("Woken Up...");
		} catch (InterruptedException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		try {
			increment();
		}catch (Exception e) {
			System.out.println(e);
		}finally {
			lock.unlock();
		}
		
		
	}
	public void secondthread() {
		
		
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		lock.lock();
		System.out.println("Press Returned Key!");
	    new Scanner(System.in).nextLine();
		
	    System.out.println("Got Returned..");
	    cond.signal();
		try {
			increment();
		}catch (Exception e) {
			System.out.println(e);
		}finally {
			lock.unlock();
		}
	}
	 public void finished() {
		 System.out.println("Count is: "+ count);
	 }
}

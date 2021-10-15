package com.example.demo.led;

import java.util.ArrayList;

public class CareTaker {
	
	ArrayList<Momento> ledList = new ArrayList<Momento>();
	
	
	public void addMomnto(Momento momento) {
		
		ledList.add(momento);
		System.out.println("Led has been shifted to store");
		
	}
	
	public Momento getMomnto(int index) {
		
		return ledList.get(index);
		
	}

}

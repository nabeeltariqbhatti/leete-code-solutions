package com.example.demo.led;

public class Momento {
	
	
	private LedTv ledTv;
	
	

	public Momento(LedTv ledTv) {
		super();
		this.ledTv = ledTv;
	}

	public LedTv getLedTv() {
		return ledTv;
	}

	public void setLedTv(LedTv ledTv) {
		this.ledTv = ledTv;
	}

	@Override
	public String toString() {
		return "Momento [ledTv=" + ledTv + "]";
	}
	
	
	

}

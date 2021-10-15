package com.example.demo.led;

public class Originator {


	private LedTv ledTv;
	
	

	public Originator(LedTv ledTv) {
		super();
		this.ledTv = ledTv;
	}

	public LedTv getLedTv() {
		return ledTv;
	}

	public void setLedTv(LedTv ledTv) {
		this.ledTv = ledTv;
	}
	
	public Momento createMomento(LedTv ledTv) {
		return new Momento(ledTv);
	}
	public void setMomento(Momento momento) {
		
		this.ledTv = momento.getLedTv();
	}

	@Override
	public String toString() {
		return "Originator [ledTv=" + ledTv + "]";
	}
	
	
}

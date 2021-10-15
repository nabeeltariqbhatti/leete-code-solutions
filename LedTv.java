package com.example.demo.led;

public class LedTv {
	
	String size;
	String price;
	boolean useSupport;
	public LedTv(String size, String price, boolean useSupport) {
		super();
		this.size = size;
		this.price = price;
		this.useSupport = useSupport;
	}
	public String getSize() {
		return size;
	}
	public void setSize(String size) {
		this.size = size;
	}
	public String getPrice() {
		return price;
	}
	public void setPrice(String price) {
		this.price = price;
	}
	public boolean isUseSupport() {
		return useSupport;
	}
	public void setUseSupport(boolean useSupport) {
		this.useSupport = useSupport;
	}

	
	
	

}





interface Leaves{
	
	boolean canHandle(int duration) throws InterruptedException;
}





class HR implements Leaves{

	@Override
	public boolean canHandle(int duration) {
		if(duration > 30) {
			try {
				Thread.sleep(2000);
				System.out.println("Coult not be approved");
				return false;
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		return true;
	}
	
}








class Manager implements Leaves{

	@Override
	public boolean canHandle(int duration) {
		if(duration > 20 ) {
			try {
				Thread.sleep(2000);
				System.out.println("Manager cannot approve leaves forwarded to HR");
				return new HR().canHandle(duration);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			;
		}
		return true;
	}
	
}



class Lead implements Leaves{

	@Override
	public boolean canHandle(int duration) throws InterruptedException {
		if(duration > 10) {
			Thread.sleep(2000);
			System.out.println("Lead cannot approve leaves");
			return new Manager().canHandle(duration);
		}
		return true;
	}
	
}



//developer wants to apply leaves and he goes to lead and if lead cannot approve he passes the request to other receiver and goes on until developer's request is rejected or approved


class Developer{
	boolean apply(int duration) {
		try {
			return new Lead().canHandle(duration);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return false;
	}
}

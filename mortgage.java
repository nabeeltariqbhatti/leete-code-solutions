package mortgageCalculator;

import java.text.NumberFormat;
import java.util.Scanner;

public class MortgageCalculator {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in); 
      	System.out.print("Enter Principal Amount : ");
        Integer principal=scan.nextInt();
      	System.out.print("Enter Annual Rate of Interest : ");
      	double rate=scan.nextDouble();
      	
      	rate=(rate/100)/12;
      	
      	System.out.print("Enter Time period in years : ");
      	float period=scan.nextFloat();
      	
      	period=period*12;
      	
      	float mortgage= (float) (principal*(rate*(Math.pow(1+rate, period)/((Math.pow(1+rate, period)-1)))));
      
      	
      	System.out.println("Payment: "+NumberFormat.getCurrencyInstance().format(mortgage) );
      	
	}

}

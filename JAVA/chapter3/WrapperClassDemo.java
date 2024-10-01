/* Program to demonstrate Wrapper Class Methods */

import java.io.*;

class WrapperClassDemo
{
	
	public static void main(String args[])
	{
		// Converting number to object
		Float principalAmt = new Float(0);
		Float interestRate = new Float(0);
		
		int num_of_years=0;

	
	    	try
	    	{
			DataInputStream in = new DataInputStream(System.in);
			System.out.print("Enter Principal Amount : ");
			System.out.flush();
			String principalString = in.readLine();
			principalAmt = Float.valueOf(principalString); // String object to number object

			System.out.print("Enter Interest Rate : ");
			System.out.flush();
			String interestString = in.readLine();
			interestRate = Float.valueOf(interestString); // String object to number object


	  		System.out.print("Enter Number of years : ");
			System.out.flush();
			String yearString = in.readLine();
			num_of_years = Integer.parseInt(yearString); // Numeric Strings to numbers
	    	}

	    	catch(IOException e)
	    	{
			System.out.println("I/O Error");
			System.exit(1);
	    	}


		float TotalAmount = loan(principalAmt.floatValue(),interestRate.floatValue(),num_of_years);
		System.out.println("------------------------------");
		System.out.println("Total Amount : "+TotalAmount);
		System.out.println("------------------------------");
	}

	static float loan(float p,float r,int n)
	{
		int year = 1;
		float sum = p;
		while(year <= n)
		{
			sum = sum * (1+r);
			year = year + 1;
		}
		return sum; 
	}
}	
		


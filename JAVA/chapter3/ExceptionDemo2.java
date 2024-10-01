/* Program to demonstrates try and catch block */

class ExceptionDemo2
{
	public static void main(String args[ ]) 
	{
		int x,y,z;
		x = 15;
		y = 15;

		try
		{       // monitor a block of code.			
			z = 500/(x-y);         // Exception here
			System.out.println(" This will not be Executed");
		}
		catch(ArithmeticException e)   
		{       // catch divide-by-zero 
			System.out.println("\n Division by zero....");
			System.out.println(" Exception :"+e);
		}

		System.out.println("\n After catch block....");
	}
}
	

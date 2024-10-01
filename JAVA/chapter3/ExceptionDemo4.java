/* This program contains an Error.
   A subclass must come before its superclass in a series of catch
   statements. if not, unreachable code will be created and a compile-
   time error will result */

class ExceptionDemo4
{
	public static void main(String args[ ]) 
	{
		int x,y,z;
		x = 15;
		y = 15;

		try
		{       // monitor a block of code.			
			z = 500/(x-y);         // Exception here
		}
		catch(Exception e)   
		{       
			System.out.println("\n Generic Exception catch....");			
		}
		
		/* This catch never reached because ArithmeticException
		   is a subclass of Exception   */
		
		catch(ArithmeticException e)   
		{       // Error- unreachable
			System.out.println("This is never reached....");
		}

	}
}
		

/* Program to Demonstrates 'finally' */

class ExceptionDemo8
{
	// Through an exception out of the method
	static void procedure1() 
	{
		try
		{
		     System.out.println(" Inside 'procedure1( )'.....");
		     throw new ArithmeticException("finallyDemo");		
	        }
	        finally
	        {
		     System.out.println(" finally block of 'procedure1( )'.....");
	        } 
	}

	// Return from within a try block
	static void procedure2() 
	{
		try
		{
		     System.out.println("\n Inside 'procedure2( )'.....");
		     return;		     	
	        }
	        finally
	        {
		     System.out.println(" finally block of 'procedure2( )'.....");
	        } 
	}

	// Execute a try block normally
	static void procedure3() 
	{
		try
		{
		     System.out.println("\n Inside 'procedure3( )'.....");	     	
	        }
	        finally
	        {
		     System.out.println(" finally block of 'procedure3( )'.....");
	        } 
	}
	// Execute a try/catch block normally
	static void procedure4() 
	{
		try
		{
		     System.out.println("\n Inside 'procedure4( )'.....");
		     throw new ArithmeticException("finallyDemo");		
	        }
		catch(ArithmeticException  e)   
		{       
		        System.out.println(" Caught Arithmetic Exception....");	
		}
	        finally
	        {
		     System.out.println(" finally block of 'procedure4( )'.....");
	        } 
	}

	public static void main(String args[ ]) 
	{
		try
		{
			procedure1();
		}
		catch(Exception e)   
		{       
		        System.out.println(" Caught Exception....");	
		}
		procedure2();
		procedure3();
		procedure4();
		System.out.println("\n End of the program.....");
	}
}

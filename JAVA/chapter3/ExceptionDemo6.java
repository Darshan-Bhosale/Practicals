/* Program to Demonstrates 'throw' */

class ExceptionDemo6
{
	static void procedure()
	{
		try
		{
		      throw new NullPointerException("throwDemo");
		}
		catch(NullPointerException e)   
		{       
		        System.out.println(" Caught Exception inside 'procedure'.....");
			throw e;        // rethrow the exception	
		}
	}


	public static void main(String args[ ]) 
	{
		try
		{
			procedure();
		}
		catch(NullPointerException e)   
		{       
		        System.out.println(" Recaught Exception....."+e);	
		}
	}
}


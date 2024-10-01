/* Program to Demonstrates 'throws' */

class ExceptionDemo7
{
	static void procedure() throws IllegalAccessException
	{
		
		System.out.println(" Inside 'procedure( )'.....");
		throw new IllegalAccessException("throwsDemo");	
		
	}


	public static void main(String args[ ]) 
	{
		try
		{
			procedure();
		}
		catch(IllegalAccessException e)   
		{       
		        System.out.println(" Caught Exception...."+e);	
		}
	}
}


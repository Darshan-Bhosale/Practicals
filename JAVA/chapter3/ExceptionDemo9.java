/* Program to Demonstrates 'Own exception' */

class OwnException extends Exception
{
	private int no;
	
	OwnException(int no1)
	{
		no=no1;
	}

	public String toString()
	{
		return "OwnException Odd Number("+no+")";
	}
}

class ExceptionDemo9
{
	static void evenodd(int number) throws OwnException
	{
		System.out.println("\ncalled evenodd ("+number+")");
		if(number%2==0)
			System.out.println("Normal Exit....Number is Even ");
		else
			throw new OwnException(number); 
			
	}
		
	public static void main(String args[ ]) 
	{
		try
		{
			evenodd(20);
			evenodd(25);
		}
		catch(OwnException e)
		{
			System.out.println("Caught ...."+e);
		}
	}
}
					
		
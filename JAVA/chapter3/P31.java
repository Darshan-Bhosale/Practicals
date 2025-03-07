/* Program that throws a 'NoMatchException' when a string is not equal to �India� */

class NoMatchException extends Exception
{
	private String str;
	
	NoMatchException(String str1)
	{
		str=str1;
	}

	public String toString()
	{
		return "NoMatchException --> String is not India and string is "+str;
	}
}

class P31
{	
		
	public static void main(String args[ ]) 
	{
		String str1= new String("India");
		String str2= new String("Pakistan");	
			
		try
		{
			if(str1.equals("India"))			
				System.out.println(" String is : "+str1);
			else			
			
				throw new NoMatchException(str1); 
			
			if(str2.equals("India"))
				System.out.println("\n String is : "+str2);
			else
				throw new NoMatchException(str2); 			
		}
		catch(NoMatchException e)
		{
			System.out.println("\nCaught ...."+e);
		}
	}
}		

/* Program to demonstrates multiple catch clauses */

class ExceptionDemo3
{
	public static void main(String args[ ]) 
	{
		int arr[] = {5,20};
		int a = 5;

		try
		{       
			int b = arr[4]/a-arr[1];
		}
		catch(ArithmeticException e)   
		{       
			System.out.println("\n Division by zero....."+e);
			
		}
		catch(ArrayIndexOutOfBoundsException e)   
		{       
			System.out.println("\n Array index Error....."+e);
			
		}
		catch(ArrayStoreException e)   
		{       
			System.out.println("\n Wrong Data Type....."+e);
			
		}
		System.out.println("\n After try/catch block....");
	}
}
	

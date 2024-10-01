/* Program to demonstrates try and multiple catch  */

import java.io.DataInputStream;     // to load DataInputStream class         

class P30
{
	public static void main(String args[])
	{
		int result,no1,no2=20,position;
		int arr[]= new int[20]; 
		DataInputStream in = new DataInputStream(System.in); 
		try
		{
			System.out.print("Enter number : ");
			no1= Integer.parseInt(in.readLine()); 
			result = no2/no1;
			System.out.println(no2+"/"+no1+" = "+result);
			
			System.out.print("Enter position of array where you want to store result : ");
			position = Integer.parseInt(in.readLine()); 
			if(position>20)
				throw new ArrayIndexOutOfBoundsException("Demo");
			if(position<0)
				throw new NegativeArraySizeException("Demo");
			arr[position]=result;	
		}
		catch(ArithmeticException e)
		{
			System.out.println(" Division by zero --> "+e);
			result=0;
			System.out.println(" Result is : "+result);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(" Array size is 20 --> "+e);
		}
		catch(NegativeArraySizeException e)
		{
			System.out.println(" Array size should be positive --> "+e);
		}
		catch(Exception e) 
		{ 
			System.out.println("I/O Error");   
		}
 		System.out.println("End of program..... ");
	}
}

	
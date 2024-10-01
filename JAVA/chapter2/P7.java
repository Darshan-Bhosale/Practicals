/* program to illustrate  pow () function and read operation */

import java.io.DataInputStream;    // load class for reading purpose

class P7
{
	public static void main(String args[])
	{
		int num , power , result ;
		
                DataInputStream in = new DataInputStream(System.in); // creating object of class DataInputStream.

		try
		{
			System.out.print("Enter the Number :");
			num = Integer.parseInt(in.readLine());
			System.out.print("Enter the power :");
			power = Integer.parseInt(in.readLine());
		
			result= num;
			for(int i=0;i<power-1;i++)
			{
				result =result*num;
			}   
			System.out.println(" Result is : "+result);	
		}
		catch(Exception e) {  System.out.println("I/O Error");   }
			
	}
}

/* This program might give some Note at compile time ,ignore it and execute your program */
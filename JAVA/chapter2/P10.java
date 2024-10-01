/*Program to compute sum of the digits of a given integer number.*/

import java.io.DataInputStream;    

class P10
{
	public static void main(String args[])
	{
		int num , temp , sum = 0 ;

		// creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 

		try
		{
			System.out.print("Enter the Number :");
			num = Integer.parseInt(in.readLine());

			do
			{
				temp = num % 10 ;
				sum = sum + temp ;
				num = num / 10 ;
			}
			while (num != 0) ;
		}

		catch(Exception e) {  System.out.println("I/O Error");   }

		System.out.println("The sum of individual digits is "+sum);
	}
}


/* This program might give some Note at compile time ,ignore it and execute your program */
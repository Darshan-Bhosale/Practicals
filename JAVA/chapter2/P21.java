/*Program to illustrate Harmonic series : 1 + 1/2 + 1/3 + ......+ 1/n */

import java.io.DataInputStream;   // to load DataInputStream class 


class P21
{
	public static void main(String args[])
	{
		int n;
		float temp,sum=0.0F;

		// creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 
		
		System.out.println("Harmonic series : 1 + 1/2 + 1/3 + ......+ 1/n \n ");

	        try
	       {

		System.out.print(" Enter a number  : ");
		n = Integer.parseInt(in.readLine());
		
		for(int i=0;i<n;i++)			
			sum= sum + (float)1/(i+1);
		
		System.out.println("\nHarmonic series for "+n+" is : "+sum);

		}
		catch(Exception e) {  System.out.println("I/O Error");   }
	}
}

/* This program might give some Note at compile time, ignore it and go ahead.*/
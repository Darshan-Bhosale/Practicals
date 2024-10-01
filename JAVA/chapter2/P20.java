/* Program to display Intermediate values until number converges to 1*/

import java.io.DataInputStream;   // to load DataInputStream class 

class P20
{
	public static void main(String args[])
	{
		int x, p = 0, count  = 0;
		boolean exp=true;

		// creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 

	        try
	       {

		System.out.print("Enter a number  : ");
		x = Integer.parseInt(in.readLine());
		
		while(exp)
		{
			if (x%2==0)
				x=x/2;
				
			else
				x=x*3+1;
			p=x;
			count=count+1;
			System.out.println(" Number After "+count+" iteration is "+x);
			if(p!=1)
				exp=true;
			else if (p==1)			     
				exp=false;
					     
			
			
		}
		System.out.println("\nTotal Number of iterations : "+count);
		}
		catch(Exception e) {  System.out.println("I/O Error");   }
	}
}

/* This program might give some Note at compile time, ignore it and go ahead. */
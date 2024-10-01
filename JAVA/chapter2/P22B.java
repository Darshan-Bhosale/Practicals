/* Using Conditional Operator */

import java.io.DataInputStream;   // to load DataInputStream class 
class P22B
{	
	public static void main(String args[])
	{
		int x,y;
		// creating object of class DataInputStream.
                   DataInputStream in = new DataInputStream(System.in); 

		try
	       {

		System.out.print(" Enter a number  : ");
		x = Integer.parseInt(in.readLine());
	
		if(x>0)
		     y=1;
		else if(x<0)
			y=-1;
		     else
			y=0;

		System.out.println(" x = "+x+"   y = "+y);
		}

		catch(Exception e) {  System.out.println("I/O Error");   }
	}
}

/* Note : This program might give some Note at compile time, ignore it and go ahead. */ 
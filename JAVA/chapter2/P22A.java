import java.io.DataInputStream;   // to load DataInputStream class 

class P22A
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
	
			if(x>=0)
			{
			     y=1;
			     if(x==0)     // nested if
			        y=0;
			}
			else
				y=-1;

			System.out.println(" x = "+x+"   y = "+y);
		}
		catch(Exception e) {  System.out.println("I/O Error");   }
	}
}

/* Note : This program might give some Note at compile time, ignore it and go ahead. */ 


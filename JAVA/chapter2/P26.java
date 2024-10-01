/* Program to compute value of x1 and x2 of linear equations */

import java.io.DataInputStream;     // to load DataInputStream class         

class LinearEq
{
	public static void main(String args[])
	{
		int a=0,b=0,c=0,d=0,m=0,n=0,deno=0;
		double x1=0.0,x2=0.0;
		DataInputStream in = new DataInputStream(System.in); 

		System.out.println(" Two Linear Equations are :");
		System.out.println("\t ax1 + bx2 = m ");
		System.out.println("\t cx1 + dx2 = n \n");

		try
		{
		      	System.out.print("Enter a : ");
		      	a= Integer.parseInt(in.readLine()); 
			System.out.print("Enter b : ");
			b = Integer.parseInt(in.readLine()); 
			System.out.print("Enter c : ");
			c = Integer.parseInt(in.readLine()); 
			System.out.print("Enter d : ");
			d = Integer.parseInt(in.readLine()); 
			System.out.print("Enter m : ");
			m = Integer.parseInt(in.readLine()); 
			System.out.print("Enter n : ");
			n = Integer.parseInt(in.readLine());
		}
		catch(Exception e) {  System.out.println("I/O Error");   }

		deno = (a*d)-(c*b);
		if(deno==0)
			System.out.println(" Denominator is zero ");
		else
		{
			x1 = (m*d - b*n)/deno;
			x2 = (n*a - m*c)/deno;
			System.out.println(" x1 = "+(double)x1);
			System.out.println(" x2 = "+(double)x2);
		}
	}
}

				
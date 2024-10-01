/* Program to print two-dimensional Square Root Table */

import java.text.*;    // to include DecimalFormat class

class TwoDArray5
{
	public static void main(String args[])
	{
		double a[][]= new double[10][10];
		int i,j;
		double x,y;
		DecimalFormat df = new DecimalFormat("0.00"); // formatting
		
		System.out.println("--------Square Root Table--------\n");

		for(i=0,x=0.0;i<10;i++,x=x+1.0)
		    for(j=0,y=0.0;j<10;j++,y=y+0.1)		    
			 a[i][j] = Math.sqrt(x+y);
		
		for(j=0,y=0.0;j<10;j++,y=y+0.1)
		     System.out.print("    "+df.format(y));

		for(j=0;j<10;j++)
		    System.out.print("==============");

		System.out.println();
		for(i=0,x=0.0;i<10;i++,x=x+1.0)
		{	
		    System.out.print(x+" | ");
		    for(j=0;j<10;j++)
			System.out.print("   "+df.format(a[i][j]));
		    System.out.println();
		}
	}
}
		 
				
/*Program to find the largest number of the given five numbers*/

import java.io.DataInputStream;   // to load DataInputStream class 

class P11
{
	public static void main(String args[])
	{
		int n1 , n2 , n3 , n4 , n5 , max ;

		// creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 

		try
		{
			System.out.print("Enter the First Number :");
			n1 = Integer.parseInt(in.readLine());
			System.out.print("Enter the Second Number :");
			n2 = Integer.parseInt(in.readLine());
			System.out.print("Enter the Third Number :");
			n3 = Integer.parseInt(in.readLine());
			System.out.print("Enter the Fourth Number :");
			n4 = Integer.parseInt(in.readLine());
			System.out.print("Enter the Fifth Number :");
			n5 = Integer.parseInt(in.readLine());

			if (n1 > n2)
				max = n1 ;
			else
				max = n2 ;

			if (n3 > max)
				max = n3 ;

			if (n4 > max)
				max = n4 ;

			if (n5 > max)
				max = n5 ;

			System.out.println("The maximum number of the given five numbers is "+max);
		}

		catch(Exception e) {  System.out.println("I/O Error");   }
	}
}




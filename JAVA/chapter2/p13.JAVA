/*Program to display months in word*/ 

import java.io.DataInputStream;   // to load DataInputStream class 
class P13
{
	public static void main(String args[])
	{
		int n=0;
		// creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 

		try
		{
			System.out.print("Enter the Month Number(1-12) : ");
			n = Integer.parseInt(in.readLine());
			switch(n)
			{
				case 1:
					System.out.println("Month is Jan");
					break;
				case 2:
					System.out.println(" Month is Feb");
					break;
				case 3:
					System.out.println("Month is March");
					break;
				case 4:
					System.out.println("Month is April");
					break;
				case 5:
					System.out.println("Month is May");	
					break;
				case 6:
					System.out.println("Month is June");
					break;
				case 7:
					System.out.println("Month is July");
					break;
				case 8:
					System.out.println("Month is Aug");
					break;
				case 9:
					System.out.println(" Month is September");
					break;
				case 10:
					System.out.println(" Month is Oct");
					break;
				case 11:
					System.out.println("Month is November");
					break;
				case 12:
					System.out.println(" month is Dec");	
					break;
				default:System.out.println(" Wrong input!!!");
			}
		}

		catch(Exception e) {  System.out.println("I/O Error");   }
	}
}

/*Program to performed arithmetic operations using switch case*/

class SwitchDemo
{
	public static void main(String args[])
	{
		int  x , y ;
		char choice;
		x = 10;
		y = 2;
		
		System.out.println("\t\tMenu\n");
		System.out.println("\t1. Addition       --> Enter A \n");
		System.out.println("\t2. Subtraction    --> Enter S \n");
		System.out.println("\t3. Division       --> Enter D \n");
		System.out.println("\t4. Multiplication --> Enter M \n");
		
		try
		{
			System.out.println("Enter your choice :"); 
			choice= (char)System.in.read();

			switch (choice)
			{
				case 'A' :
					System.out.println("Addition of "+x+" and "+y+" : "+(x+y));
					break ;
				case 'S' :
					System.out.println("Subtraction of "+x+" and "+y+" : "+(x-y));
					break ;
				case 'D' :
					System.out.println("Division of "+x+" and "+y+" : "+((float)x/(float)y));
					break ;
				case 'M' :
					System.out.println("Multiplication of "+x+" and "+y+" : "+(x*y));
					break ;		
				default :System.out.println("Wrong choice !!");
			
			}
		}
		catch(Exception e) { System.out.println("I/O Error"); } 

	}
}

/*To check whether entered character is lower case, upper case, numeric or symbol using if-else only*/

class P8
{
	public static void main(String args[ ])
	{
		char c ;

		try
		{
			System.out.print("Enter any character :");
			c = (char)System.in.read( );

			if ((c >= 'a') && (c <= 'z'))
				System.out.print("The character is lower case.\n"); 
			     else if ((c >= 'A') && (c <= 'Z'))
					System.out.print("The character is upper case.\n");
				else if ((c >= '0') && (c <= '9'))
					System.out.print("The character is numeric.\n");
				      else
					  System.out.print("The character is a symbol.\n");
		}

		catch(Exception e) 
                { 
                                 System.out.println("I/O Error");  
                }

	}
}

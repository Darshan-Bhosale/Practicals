/*To check whether entered character is lower case, upper case, numeric or symbol using if-else only*/

class P9
{
	public static void main(String args[])
	{
		char c ;

		try
		{
			System.out.print("Enter any character :");
			c = (char)System.in.read( );

			switch (c)
			{
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '9':System.out.println("The character is numeric.");
					 break ;
				case 'a':
				case 'b':
				case 'c':
				case 'd':
				case 'e':
				case 'f':
				case 'g':
				case 'h':
				case 'i':
				case 'j':
				case 'k':
				case 'l':
				case 'm':
				case 'n':
				case 'o':
				case 'p':
				case 'q':
				case 'r':
				case 's':
				case 't':
				case 'u':
				case 'v':
				case 'w':
				case 'x':
				case 'y':
				case 'z':System.out.println("The character is lower case.");
					break ;
				case 'A':
				case 'B':
				case 'C':
				case 'D':
				case 'E':
				case 'F':
				case 'G':
				case 'H':
				case 'I':
				case 'J':
				case 'K':
				case 'L':
				case 'M':
				case 'N':
				case 'O':
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
				case 'T':
				case 'U':
				case 'V':
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':System.out.println("The character is upper case.");
					break ;
				default :System.out.println("The character is a symbol");
			}
			
		}

		catch(Exception e) { System.out.println("I/O Error"); }

	}
}







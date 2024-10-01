/* Program that uses break as a civilized form of goto*/

class BreakDemo3
{
	public static void main(String args[])
	{
		boolean b = true;

		FIRST: {
			SECOND : {
				THRID : {
					  System.out.println("Before break....");
					  if(b) break SECOND ; //break out of second block
					  System.out.println("This won't execute....");
					}
				    System.out.println("This won't execute....");
				 }			   
			  System.out.println("This is after SECOND block....");
			}
	}
}
/*Program to calculate factorial of given number*/

class P2
{
	public static void main(String args[])
	{
		int i , number , factorial ;
		number = 7;

		for (i=1,factorial=1 ; i<=number ; i++)
			factorial = factorial * i ;

	 	System.out.println("The factorial of "+number+" : "+factorial);
	}
}

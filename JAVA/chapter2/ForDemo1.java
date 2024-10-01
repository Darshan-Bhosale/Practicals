/* Program to compute sum of first 20 numbers using for loop */

class ForDemo1
{ 
	public static void main(String args[])
	{
		int i , sum = 0 ;

		for (i=1 ; i<21 ; i++)
			sum = sum + i ;
		System.out.println("The sum of first twenty numbers is "+sum);
	}
}

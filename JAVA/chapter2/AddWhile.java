/* Program of adding first ten numbers using the while loop */

class AddWhile
{
	public static void main(String args[])
	{
		int i = 1 , sum = 0 ;

		while (i<11)
		{
			sum = sum + i ;
			i++ ;
		}

		System.out.println("The sum of first ten numbers is : "+sum);
	}
}

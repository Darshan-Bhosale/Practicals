/*Program of displaying a certain pattern on screen*/

class NestedWhileDemo
{
	public static void main(String args[])
	{
		int i = 1 , j , n ; 
		n = 6 ; // value of n should be between 1 to 10 

		while (i<=n)
		{
			j = 1 ;
			while (j<=i)
			{
				System.out.print("*\t");
				j++ ;
			}
			System.out.println(" ") ;
			i++ ;
		}
	}
}
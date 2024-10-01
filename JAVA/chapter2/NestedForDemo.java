/* Program to display a particular pattern of stars using nested for loops.*/

class NestedForDemo
{
	public static void main(String args[])
	{
		int i , j , num ;
		num = 6 ;         //value of num is between 1 to 10
		for (i=1 ; i<=num ; i++)
		{
			for (j=1 ; j<=i ; j++)
				System.out.print("*\t");
			System.out.println(" ");
		}
	}
}

/* Program to find the minimum and maximum number out of the given three numbers*/

class MinMax
{
	public static void main(String args[])
	{
		int a , b , c , min , max ;
		a = 15;
		b = 100;
		c = -5;

		if (a < b)
			min = a ;
		else
			min = b ;

		if (c < min)
			min = c ;
		System.out.println("The minimum number is "+min);

		if (a > b)
			max = a ;
		else
			max = b ;

		if (c > max)
			max = c ;
		System.out.println("The maximum number is "+max);
	}
}

/* Program to implement Fibonacci series*/

class Fibonacci_series
{
	public static void main(String args[])
	{
		int x , y , z = 0 ;
		System.out.println("The Fibonacci Series :\n");
		System.out.println("====================\n");
		System.out.println("0\n1");

		for (x=0,y=1 ; y<1000 ; x=z)
		{
			z = y ;
			y = x + y ;
			System.out.println(y);
		}
	}
}

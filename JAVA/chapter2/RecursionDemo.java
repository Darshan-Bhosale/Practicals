/* Program to demonsrates Recursion - Factorial of a given number */

class Factorial
{
	int fact(int n)
	{
		int result;
		if(n==1) 
		     return 1;
		result=fact(n-1)*n;   // recursive call to fact() function
		return result;
	}
}

class RecursionDemo
{
	public static void main(String args[])
	{
		Factorial f = new Factorial();

		System.out.println(" Factorial of 5 is : "+f.fact(5));
		System.out.println(" Factorial of 6 is : "+f.fact(6));
		System.out.println(" Factorial of 7 is : "+f.fact(7));
		System.out.println(" Factorial of 8 is : "+f.fact(8));
	}
}
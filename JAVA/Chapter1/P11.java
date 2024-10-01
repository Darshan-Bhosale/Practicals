/* Program to find absolute value of the variable */

class P11
{
	public static void main(String args[])
	{ 
		int x = -25, y =-18;

		/* Using Ternary Operator */
		System.out.println("Value of x = "+x); 
		x= x<0?-x:x;
		System.out.println("Absolute value of x = "+x);

		/* Using mathematical function 'abs()' */
		System.out.println("\nValue of y = "+y); 
		System.out.println("Absolute value of y = "+Math.abs(y));
	}
}   
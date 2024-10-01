/* Program to demonstrates the increment operator*/

class IncDec
{
	public static void main(String args[])
	{
		int a = 10;
		int b = 20;
		int c,d;
		c = ++b;
		d = a++;
		c++;
		System.out.println("a     = "+a);
		System.out.println("b     = "+b);
		System.out.println("c     = "+c);
		System.out.println("d     = "+d);
	}
}
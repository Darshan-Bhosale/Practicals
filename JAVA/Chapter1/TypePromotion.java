/* Program to demonstrate type promotion */

class TypePromotion
{
	public static void main(String args[])
	{
		byte b = 52;
		char c = 'a';
		short s = 1024;
		int i = 50000;
		float f = 7.67f;
		double d = .1234;
		double result = (f*b) + (i/c) - (d*s);
		
		System.out.println((f*b)+" + "+(i/c)+" - "+(d*s)+" = "+result);
		
	}
}
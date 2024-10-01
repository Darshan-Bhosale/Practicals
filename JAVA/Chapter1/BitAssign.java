/* Program to demonstrate Bitwise Operator Assignments */

class BitAssign
{
	public static void main(String args[])
	{
		int A=1,B=2,C=3;

		A |=4;
		B >>=1;
		C <<=1;
		A ^=C;
		
		System.out.println(" A = "+A);
		System.out.println(" B = "+B);
		System.out.println(" C = "+C);
	}
}
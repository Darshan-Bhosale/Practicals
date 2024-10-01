/* Program to demonstrate Relational Operators */

class RelationalOp
{
	public static void main(String args[])
	{
		float x = 15.0F, y = 10.65F, z = 25.0F;
		System.out.println("x = "+x);
		System.out.println("y = "+y);
		System.out.println("z = "+z);
		System.out.println("x < y is : "+(x<y));
		System.out.println("x > y is : "+(x>y));
		System.out.println("x == z is : "+(x==z));		
		System.out.println("x <= z is : "+(x<=z));
		System.out.println("x >= y is : "+(x>=y));
		System.out.println("y != z is : "+(y!=z));
		System.out.println("y == x+z is : "+(y==x+z));
	}
}
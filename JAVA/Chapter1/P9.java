/*  Program to implements the quadratic formula */

class P9
{

	public static void main(String args[])
	{
 
		//implements the quadratic formula

		double a=2,b=8.001,c=8.002 ;
		
		System.out.println("a :"+a);
		System.out.println("b :"+b);
		System.out.println("c :"+c);


		System.out.println("\n The equation is : "+a+" * x * x + "+b+" * x + "+c+" = 0 ");

		double d = b * b - 4 * a * c ;
		double sqrtd = Math.sqrt(d);
		double x1 = ( - b + sqrtd) / (2 * a ) ;
		double x2 = ( - b - sqrtd) / (2 * a ) ;

		System.out.println("The Solution are  : ");
		System.out.println("\t x1 ="+x1);
		System.out.println("\t x2 ="+x2);
		
	}
}

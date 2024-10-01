/* Program to demonsrates Method Overloading - Find Volume of cube, cylinder and rectangle */

class Overload
{
	int volume (int x)                 // volume of cube
	{
           return (x*x*x);
	}

	double volume(double r, int h)                // volume of cylinder
	{
           return (3.14519F*r*r*h) ;
	}

	long volume(long l, int b, int h)               // volume of rectangular 
	{
           return (l*b*h);
	}
}

class OverloadDemo2
{
	public static void main(String args[ ])
	{	
		Overload v=new Overload();

		System.out.println("Volume of a cube = "+v.volume(10));
		System.out.println("Volume of a cylinder = "+v.volume(2.5,8));
		System.out.println("Volume of a Rectangle = "+v.volume(100L,75,15));
	}
}


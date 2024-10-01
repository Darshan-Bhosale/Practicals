/* Program to demonstrate Method Overloading- Find Area of Rectangle and circle */

class Overload
{
	// overload area for 2 float parameters- to find area of Rectangle
	float area(float length, float width)	
	{
		return(length * width);
	}

	// overload area for 1 float parameters- to find area of Circle
	float area(float radius)	     
	{
		return(3.142F * radius * radius);
	}
	
}

class OverloadDemo1
{
	public static void main(String args[])
	{
		Overload a=new Overload();

		System.out.println("\nArea of a rectangle = "+a.area(1.5F, 3.6F));
		System.out.println("\nArea of a circle  = "+a.area(2.5F));
	}
}


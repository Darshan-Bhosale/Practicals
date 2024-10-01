/* Program to demonstrate Constructor */

class Rectangle
{
	int length;
	int width;

	// This is Constructor for Rectangle
	Rectangle()
	{
		System.out.println(" Constructing Rectangle....");
		length = 20;
		width = 15;
	}

	// compute and return Area of a Rectangle
	int area()
	{
		return length*width;
	}

	
}


class RectangleDemo5
{
	public static void main(String args[])
	{
		// Declare, allocate, and initialize Rectangle Object
		Rectangle rect1 = new Rectangle();
		Rectangle rect2 = new Rectangle();
		int a;
	
		
		// get area of first rectangle
		a = rect1.area();          
		System.out.println(" Area of Rectangle is : "+a);
		
		// get area of second rectangle
		a= rect2.area();          
		System.out.println(" Area of Rectangle is : "+a);
	}
}


/* Program to demonstrate parameterized Constructor */

class Rectangle
{
	int length;
	int width;

	// This is parameterized Constructor for Rectangle
	Rectangle(int l,int w)
	{		
		length = l;
		width = w;
	}

	// compute and return Area of a Rectangle
	int area()
	{
		return length*width;
	}
	
}


class RectangleDemo6
{
	public static void main(String args[])
	{
		// Declare, allocate, and initialize Rectangle Object
		Rectangle rect1 = new Rectangle(20,15);
		Rectangle rect2 = new Rectangle(25,17);
		int a;
	
		
		// get area of first rectangle
		a = rect1.area();          
		System.out.println("Area of First Rectangle(length:"+rect1.length+", width:"+rect1.width+") is: "+a);
		
		// get area of second rectangle
		a= rect2.area();          
		System.out.println("Area of Second Rectangle(length:"+rect2.length+", width:"+rect2.width+") is: "+a);
	}
}
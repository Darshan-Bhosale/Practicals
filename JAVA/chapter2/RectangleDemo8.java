/* Program to demonstrate  'this' keyword */

class Rectangle
{
	int length;
	int width;

	//  use 'this' to resolve name-space collisions.
	Rectangle(int length ,int width)
	{		
		this.length = length ;
		this.width = width;
	}

	
	// compute and return Area of a Rectangle
	int area()
	{
		return length*width;
	}
	
}


class RectangleDemo8
{
	public static void main(String args[])
	{
		// create Rectangles 
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
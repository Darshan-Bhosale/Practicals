/* Program to demonstrate  Constructor overloading */

class Rectangle
{
	int length;
	int width;

	//  Constructor used when all values are specified
	Rectangle(int l,int w)
	{		
		length = l;
		width = w;
	}

	//  Constructor used when no values are specified
	Rectangle()
	{	
		length = 0;        
		width = 0;
	}

	//  Constructor used when one value is specified for both,length and width 
	Rectangle(int l)
	{		
		length = width = l;
		
	}

	// compute and return Area of a Rectangle
	int area()
	{
		return length*width;
	}
	
}


class RectangleDemo7
{
	public static void main(String args[])
	{
		// create Rectangles using the various constructors
		Rectangle rect1 = new Rectangle(20,15);
		Rectangle rect2 = new Rectangle();
		Rectangle rect3 = new Rectangle(20);
		int a;
	
		
		// get area of first rectangle
		a = rect1.area();          
		System.out.println("Area of First Rectangle(length:"+rect1.length+", width:"+rect1.width+") is: "+a);
		
		// get area of second rectangle
		a= rect2.area();          
		System.out.println("Area of Second Rectangle(length:"+rect2.length+", width:"+rect2.width+") is: "+a);

		// get area of Third rectangle
		a= rect3.area();          
		System.out.println("Area of Third Rectangle(length:"+rect3.length+", width:"+rect3.width+") is: "+a);
	}
}
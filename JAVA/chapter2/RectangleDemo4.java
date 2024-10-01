/* Program to demonstrate method that takes parameters */

class Rectangle
{
	int length;
	int width;

	// compute and return Area of a Rectangle
	int area()
	{
		return length*width;
	}

	// sets values of rectangle
	void setdata(int l,int w)
	{
		length = l;
		width = w;
	}
}


class RectangleDemo4
{
	public static void main(String args[])
	{
		Rectangle rect1 = new Rectangle();
		Rectangle rect2 = new Rectangle();
		int a;
	
		// initialize each rectangle
		rect1.setdata(20,15);
		rect2.setdata(25,17);
		
		// get area of first rectangle
		a = rect1.area();          
		System.out.println(" Area of First Rectangle is : "+a);
		
		// get area of second rectangle
		a= rect2.area();          
		System.out.println(" Area of Second Rectangle is : "+a);
	}
}


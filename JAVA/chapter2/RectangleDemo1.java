/* Program to demonstrate the use of class.
   Call this file RectangleDemo1.java */

class Rectangle
{
	int length;
	int width;
}

// This class declares an object of type Rectangle.

class RectangleDemo1
{
	public static void main(String args[])
	{
		Rectangle rect1 = new Rectangle();
		Rectangle rect2 = new Rectangle();
		int area;
	
		//assign values to rect1's instance variables
		rect1.length= 20;
		rect1.width=15;

		//assign different values to rect2's instance variables
		rect2.length= 25;
		rect2.width=17;

		// compute area of first rectangle
		area= rect1.length* rect1.width;
		System.out.println(" Area of Rectangle (length : "+rect1.length+" , width : "+rect1.width+") is : "+area);


		// compute area of second rectangle
		area= rect2.length* rect2.width;
		System.out.println(" Area of Rectangle (length : "+rect2.length+" , width : "+rect2.width+") is : "+area);
	}
}


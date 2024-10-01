/* Program to demonstrate returning a value */

class Rectangle
{
	int length;
	int width;

	// compute and return Area of a Rectangle
	int area()
	{
		return length*width;
	}
}


class RectangleDemo3
{
	public static void main(String args[])
	{
		Rectangle rect1 = new Rectangle();
		Rectangle rect2 = new Rectangle();
		int a;
	
		//assign values to rect1's instance variables
		rect1.length= 20;
		rect1.width=15;

		//assign different values to rect2's instance variables
		rect2.length= 25;
		rect2.width=17;

		System.out.print(" First Recangle (length : "+rect1.length+" , width : "+rect1.width+") --->"); 
		a = rect1.area();          // get area of first rectangle
		System.out.println(" Area is : "+a);
		
		System.out.print(" Second Recangle (length : "+rect2.length+" , width : "+rect2.width+") --->"); 
		a= rect2.area();          // get area of second rectangle
		System.out.println(" Area is : "+a);
	}
}


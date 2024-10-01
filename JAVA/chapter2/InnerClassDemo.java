/* program to demonstrates inner class */

class Outer
{
	int outer_a = 200;

	void show()
	{
		Inner i = new Inner();
		i.display();
	}

	// This is an inner class
	class Inner
	{
		void display()
		{
			System.out.println(" Display variable 'a' of outer class = "+outer_a);
		}
	}
}

class InnerClassDemo
{
	public static void main(String args[])
	{
		Outer o = new Outer();
		o.show();
	}
}  
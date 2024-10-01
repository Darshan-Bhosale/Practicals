/* Program to demonstrate Access Protection */

class Demo
{
	int p;            // default access
	public int q;    // public access
	private int r;  // private access

	// methods to access r
	void setr(int i)      
	{        // set r's value
		r = i;
	}
	
	int getr()
	{      // get r's value
		return r;
	}
}


class AccessProDemo
{
	public static void main(String args[])
	{
		Demo d= new Demo();
		
		// OK : 'p' and 'q' may be accessed directly
		d.p=300;
		d.q=400;

		// NOT OK : 'r' cannot be accessed outside the class, hence will cause an error
		// d.r=50;

		// You must access 'r' through its methods
		d.setr(500);        //OK

		System.out.println(" p, q, and r = "+d.p+", "+d.q+", and "+d.getr());
	}
}
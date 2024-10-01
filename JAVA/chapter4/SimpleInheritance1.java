//Simple example of inheritance

//create a superclass
class A
{
	private int a;
	void showa()
	{
		System.out.println("a : "+a);
	}
}

//create a sunclass by extending A
class B extends A
{
	int b;
	void showb()
	{
		System.out.println("b : "+b);
	}
	void sum()
	{
		System.out.println("a+b : "+(a+b));
	}

}

class SimpleInheritance
{
	public static void main(String args [])
	{
		A superob=new A();
		B subob=new B();

		//the superclass may be used by itself
		superob.a=10;
		System.out.println("Contents of superob : ");
		superob.showa();

		//the subclass has access to all public members of its superclass*/
		subob.a=20;
		subob.b=30;
		System.out.println("Contents of subob : ");
		subob.showa();
		subob.showb();

		System.out.println("Sum of a and b : ");
		subob.sum();
	}
}

/*output
Contents of superob :
a : 10
Contents of subob :
a : 20
b : 30
Sum of a and b :
a+b : 50
Press any key to continue . . .
*/
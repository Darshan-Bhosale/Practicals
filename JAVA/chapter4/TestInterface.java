
/*


class Base
{
	void display()
	{
	System.out.println("Base ");
	}
}


class Derived extends Base
{
	void display()
	{
		System.out.println("Derived ");
	}
}

class A
{

	public static void main(String args[])
	{
	Base b=new Base();
	Derived d=new Derived();
	Base bd=new Derived();
	b.display();
	d.display();
	bd.display();
	}


}

*/

interface IA
{
	void display();
}

class class1 implements IA
{
	 void  display()
	{
		System.out.println("class1-display");
	}
}

class class2 implements IA
{
	void  display()
	{
		System.out.println("class2-display");
	}
}



class TestInterface
{
	public static void main(String args[])
	{

		class1 c1= new class1();
		class1 c2= new class1();
		c1.display();
		c2.display();


	}
}


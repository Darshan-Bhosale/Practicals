//Single inheritance

//create a superclass
class A
{
	int a1;            //public by default
	protected int a2;   //protected to A
	void showa1a2()
	{
			System.out.println("a1 : "+a1+", a2 : "+a2);
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
		System.out.println("a1+a2+b : "+(a1+a2+b));
	}

}

class SimpleInheritance2
{
	public static void main(String args [])
	{

		B subob=new B();


		subob.a1=10;
		subob.a2=20;
		subob.b=30;
		subob.showa1a2();
		subob.showb();
		subob.sum();
	}
}

/*output
a1 : 10, a2 : 20
b : 30
a1+a2+b : 60
*/
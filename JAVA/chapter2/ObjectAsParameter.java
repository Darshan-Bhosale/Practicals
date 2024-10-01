class Rational
{
	int numerator;
	int denominator;

	Rational(int a, int b)
	{
		numerator = a;
		denominator = b;
	}

	Rational()
	{
		numerator = 0;
		denominator = 0;
	}

	void sum(Rational n1, Rational n2) 															
	{		
		int temp = 0;
		temp += n1.numerator * n2.denominator;
		temp += n1.denominator * n2.numerator;
		numerator = temp;
		denominator = n1.denominator * n2.denominator;
	}
	void display()
	{
		System.out.print( numerator+"/"+denominator);		
	}

}

class ObjectAsParameter
{
	public static void main(String args[])
	{
		Rational r1 = new Rational(2,5);
		Rational r2 = new Rational(3,7);
		Rational r3 = new Rational();
		
		r3.sum(r1,r2);		// Objects passed as arguments

		r1.display();
		System.out.print(" + ");
		r2.display();
		System.out.print(" = ");
		r3.display();
	}
}

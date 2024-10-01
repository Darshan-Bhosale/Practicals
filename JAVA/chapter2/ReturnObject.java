/* Program to Demonstrates- Returning an Object */

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

	// Function accepting object argument & returning object
	Rational sum(Rational n)
	{										 
		Rational Tobject = new Rational();
		int temp = 0;
		temp += numerator * n.denominator;
		temp += denominator * n.numerator;
		Tobject.numerator = temp;
		Tobject.denominator = denominator * n.denominator;
		return Tobject;
	}

	void display()
	{
		System.out.print( numerator+"/"+denominator);		
	}

}

class ReturnObject
{
	public static void main(String args[])
	{
		Rational r1 = new Rational(2,5);
		Rational r2 = new Rational(3,7);
		Rational r3 = new Rational();
		
		r3 = r1.sum(r2);	// Objects passed as arguments & return type of called function is object

		r1.display();
		System.out.print(" + ");
		r2.display();
		System.out.print(" = ");
		r3.display();
	}
}

/* Program to convert given temperature in fahrenheit to celsius */

class P16
{
	public static void main(String args[])
	{
		double celsius1,celsius2,fahrenheit;		
		fahrenheit= 40;
		celsius1= (fahrenheit-32)/1.8;
		System.out.print(" Temperature in fahrenheit is "+fahrenheit);       
                System.out.println(" is converted to celsius :"+celsius1);
		fahrenheit= 60;
		celsius2= (fahrenheit-32)/1.8;
		System.out.print(" Temperature in fahrenheit is "+fahrenheit);       
                System.out.println(" is converted to celsius :"+celsius2);
		
	}
} 
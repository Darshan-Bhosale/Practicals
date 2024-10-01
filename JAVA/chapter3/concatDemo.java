/* Program to demonstrates the - concat( ) */

class concatDemo
{
	public static void main(String args[ ])
	{
		String s1 ="Abdul";
		String s2 =" Kalam";

		System.out.println("String1 is : "+s1);
		System.out.println("String2 is : "+s2);

		String temp = s1.concat(s2);   // calling concat() function

		System.out.println("\nConcatenated String after calling concat( ) : "+temp);

		temp= s1 + s2;        // using + operator to concatenate
		System.out.println("Concatenated String after applying '+' operator : "+temp);
	}
}
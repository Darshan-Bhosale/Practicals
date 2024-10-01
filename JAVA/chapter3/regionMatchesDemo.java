/* Program to demonstrates the - regionMatches( ) */

class regionMatchesDemo
{
	public static void main(String args[ ])
	{
	    	String s1="Java is object oriented Language.";
	    	String s2="C++ is object oriented Language.";
	    	String s3="VC++ IS OBJECT ORIENTED LANGUAGE.";
		boolean b ;

		System.out.println("String 1 : "+s1);
		System.out.println("String 2 : "+s2);
		System.out.print(" Comparing some region of s1 and s2...");
		b = s1.regionMatches(8,s2,7,6);
		System.out.println(b);

		System.out.println("\nString 1 : "+s1);
		System.out.println("String 3 : "+s3);
		System.out.print(" Comparing some region of s1 and s3(ignoring case)...");
		b= s1.regionMatches(true,8,s3,8,6);
		System.out.println(b);
	}
}
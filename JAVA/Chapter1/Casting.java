/* Program to demonstrate casting Incompatible Types */

class Casting
{
public static void main(String args[])
{
byte b;
int i = 258;
double d = 340.142;

System.out.println("\n Conversion of int to byte.....");
b = (byte) i;
System.out.println(" integer i : "+i+" is converted to byte b "+b);
		
System.out.println("\n Conversion of double to int.....");
i = (int) d;
System.out.println(" double d : "+d+" is converted to integer i : "+i);
		
System.out.println("\n Conversion of double to byte.....");
	b = (byte) d;
System.out.println(" double d : "+d+" is converted to byte b : "+b);
	}
}
				
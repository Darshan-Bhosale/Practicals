/* Program to interchange the value of the given 2 numbers */

class P3
{

	public static void main(String args[])
	{ 
		int no1=5, no2=18, temp;
		
		System.out.println("\nBefore interchange Numbers are : ");
		System.out.println("First Number : "+no1); 
		System.out.println("Second Number : "+no2); 

		temp = no1;
		no1 = no2;
		no2 = temp;

		System.out.println("\nAfter interchange Numbers are : ");
		System.out.println("First Number : "+no1); 
		System.out.println("Second  Number : "+no2); 

	}
}

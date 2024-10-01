/* program to check whether number is even or odd */

class EvenOdd
{
	public static void main(String args[])
	{
		int no , temp ;
		no = 35;
		
		temp = no % 2 ;
		if (temp == 0)
			System.out.println("The number "+no+" is Even");
		else
			System.out.println("The number "+no+" is Odd");
	}
}
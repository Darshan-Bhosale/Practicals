/* Program to reverse the digits of any integer number*/

class ReverseDigits
{
	public static void main(String args[])
	{
		int num , temp ; 
		num = 1234;
		System.out.println(" The Number is : "+num);
		
		System.out.print(" The Reverse Number is : ");
		do
		{
			temp = num % 10 ;
			System.out.print(temp);
			num = num / 10 ;
		}
		while (num != 0) ;

		
	}
}


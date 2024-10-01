/* Program to display whether a number is prime or not*/

class P17
{
	public static void main(String args[])
	{
		int i,num;

		num = 23;
		System.out.print(" The Number "+num+" is ");
		i=2;
		while(i<=num-1)
		{
			if(num%i==0)
			{
				System.out.print("Not a prime Number.");
				break;
			}
			i++;
		}
		if(i==num)
			System.out.print("Prime Number.");
	}
}

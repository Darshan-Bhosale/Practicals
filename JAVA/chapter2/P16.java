/* Program to check whether the number is an Armstrong number*/

class P16
{
	public static void main(String args[])
	{
		int sum=0,ch,i,j,num,no;

		no= 153;
		num=no;

		do
		{
			sum=sum+(no%10)*(no%10)*(no%10);
			no=no/10;
		}
		while(no!=0);

		if(sum==num)
			System.out.println("The number "+num+" is an Armstrong number ");
		else
			System.out.println("The number "+num+" is not an Armstrong number ");
	}
}

		
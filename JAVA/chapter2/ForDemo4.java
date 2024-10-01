/* program to find the number of and sum of all integers greater
 than 100 and less than 200 that are divisible by 7 */

class ForDemo4
{
	public static void main(String args[])
	{
		int no,count=0,sum=0;

		for(no=101;no>100&&no<200;no++)
			if(no%7==0)
			{
				System.out.println(" "+no+" is divisible by 7");
				sum=sum+no;
				count=count+1;
			}

		System.out.println("\n Total no. of integer between 100 to 200 that are divisible by 7 : "+count);
		System.out.println(" Sum of all integer between 100 to 200 that are divisible by 7 : "+sum);
	}
}
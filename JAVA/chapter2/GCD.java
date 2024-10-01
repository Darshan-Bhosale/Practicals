/* Program of finding out the Greatest Common Division (GCD) or the Highest Common Factor (HCF) of the given two numbers, using while loop*/

class GCD
{
	public static void main(String args[])
	{
		int num_1 , num_2 ; 
		num_1 = 25;
		num_2 = 15;
		
		System.out.print("The GCD of "+num_1+" and "+num_2);

		while ((num_1!=0) && (num_2!=0)) 
		{ 		
			if (num_1 > num_2)
				num_1 = num_1 - num_2 ;
			else
				num_2 = num_2 - num_1 ;
		}

		System.out.print(" is "+num_1);
	}
}

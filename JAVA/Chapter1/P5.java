  /*  Program to calculate the simple interest */

class P5
{
	public static void main(String args[])
	{
float principle, no_of_years, rate_of_interest, simple_interest;
        principle = 10000;
        no_of_years= 6;
        rate_of_interest = 8.5F;
simple_interest = principle * no_of_years *  rate_of_interest ;
             simple_interest = simple_interest / 100 ;
System.out.println("\n Simple Interest on a principle of "+principle+" is "+simple_interest+" at the rate of "+rate_of_interest+" for a period of "+no_of_years);

	}
}
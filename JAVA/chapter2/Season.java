/* Program to determine which season a particular month is in */

class Season
{
	public static void main(String args[])
	{
		int month = 3;   // March
		String season;

		if(month==12||month==1||month==2)
			season="Winter";
		else if(month==3||month==4||month==5)
			season="Spring";
		else if(month==6||month==7||month==8)
			season="Summer";
		else if(month==9||month==10||month==11)
			season="Autumn";
		else
			season= "False Month";

		System.out.println(" The March is in the "+season+".");
	}
}
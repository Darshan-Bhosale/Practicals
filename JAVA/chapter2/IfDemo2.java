/*Program to demonstrate Multiple statements within if*/

class IfDemo2
{
	public static void main(String args[])
	{	
		int marks;
		marks = 35;

		if(marks<40)
		{
			int lessmarks=40-marks;
			System.out.println("\nSorry!!!!!you are failed");
			System.out.println("\nYou should have got "+lessmarks+" more marks");

		}
	}
}
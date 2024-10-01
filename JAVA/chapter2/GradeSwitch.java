/* Program to determine grade for given marks, using switch statement*/

class GradeSwitch
{
	public static void main(String args[])
	{
		int marks,index ;
		String grade;

		marks= 83;
		index = marks/10;

		switch(index)
		{
			case 10:
			case 9:
			case 8:
				grade="Honours";
				break;
			case 7:
			case 6:
				grade="First Division";
				break;
			case 5:
				grade="Second Division";
				break;
			case 4:
				grade="Third Division";
				break;
			default:
				grade="Fail";
				break;
		}
		System.out.println("Marks : "+marks+" Grade : "+grade);
	}
}
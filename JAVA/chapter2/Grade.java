/*program to determine grade for given marks*/

class Grade
{
	public static void main(String args[])
	{
		int marks = 83;
		String grade; 

		if(marks > 79)
			grade="Honours";
		else if(marks>59)
			grade="First division";
			else if(marks > 49)
				grade="Second division";
				else if(marks > 39)
					grade="Third division";
				else
				grade="Fail";

		System.out.println("Marks : "+marks+"\t Grade : "+grade);
	}
}
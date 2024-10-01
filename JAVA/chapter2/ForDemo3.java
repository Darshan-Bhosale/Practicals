/* Program to display squares and cubes of first ten numbers */

class ForDemo3
{ 
	public static void main(String args[])
	{
		int num , square , cube ;

		System.out.println("\nThe squares and cubes of first ten numbers :\n");
		System.out.println("=================================================\n\n");
		System.out.println("Number\tSquare\tCube\n");

		for (num=1 ; num<11 ; num++)
		{
			square = num * num ;
			cube = num * square ;
			System.out.println(num+"\t"+square+"\t"+cube);
		}
	}
}

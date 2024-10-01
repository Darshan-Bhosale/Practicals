/*Program to display first 10 even numbers and their squares*/

class P3
{
	public static void main(String args[])
	{
		int n ,count=1;
		System.out.println("First 10 even numbers and their squares:\n");
		System.out.println("\nNumber\tSquare\n");
		for (n=2 ;count<=10; n=n+2)
		{
			System.out.println(n+"\t"+(n*n));
			count++;
		}
	}
}

2   4
4   16
6   

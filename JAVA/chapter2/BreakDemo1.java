/* using break to exit a for loop*/


class BreakDemo1
{
	public static void main(String args[])
	{
		for(int i =0;i<100;i++)
		{
			if(i==10) break;      //terminate loop if i is 10
			System.out.println("i ="+i);
		}
		System.out.println("End of Loop");
	}
} 
/* Program that uses break to exit from nested loops */


class BreakDemo4
{
	public static void main(String args[ ])
	{
	   OUTER:for(int i =0;i<3;i++)
		 {
			System.out.print("Iteration "+(i+1)+" = ");
			for(int j =0;j<100;j++)
			{
				if(j==10) break OUTER;      //Exit both loops
				System.out.print(j+" ");
			}
			System.out.println("This Won't execute");
		}
		System.out.println("\n End of outer Loop");
	} 
}
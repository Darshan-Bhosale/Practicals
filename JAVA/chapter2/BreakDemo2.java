/* Program that uses break in nested for loop*/


class BreakDemo2
{
public static void main(String args[])
	{
	for(int i =0;i<3;i++)
		{
	System.out.print("Iteration "+i+" = ");
	for(int j =0;j<100;j++)
	{
	if(j==10) break;      //terminate loop if j is 10
	System.out.print(j+" ");
	}
	System.out.println();
	}
	System.out.println(" End of outer Loop");
	} 
}
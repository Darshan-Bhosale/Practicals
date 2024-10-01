/* Program to demonstrate a two-dimensional*/

class ArrayDemo3
{
	public static void main(String args[])
	{
		int TwoDimensional [][]= new int[4][3];
		int i,j,count=0;

		for(i=0;i<4;i++)
		     for(j=0;j<3;j++)
		     {
			  TwoDimensional[i][j]=count;
			  count++;
		     }

		for(i=0;i<4;i++)
		{
		     for(j=0;j<3;j++)
		          System.out.print(TwoDimensional[i][j]+"   ");
		     System.out.println( );
		}
	}
}


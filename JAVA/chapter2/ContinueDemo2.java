/* Program to demonstrate continue statement with a label*/

class ContinueDemo2
{
	public static void main(String args[])
	{
	  OUTER:for(int i =0;i<10;i++)
		{
		   for(int j =0;j<10;j++)
		   {
			if(j>i) 
			{
			    System.out.println();
			    continue OUTER;
			}
			System.out.print(" "+(i*j));
		   }
		 }
	    System.out.println();
	}
}
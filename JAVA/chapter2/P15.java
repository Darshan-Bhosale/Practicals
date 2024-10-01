/* Program to display 
                        *
		* 	*	*
	*	*	*	*	*
		*	*	*	
			*
*/ 

class P15
{
	public static void main(String args[])
	{
		int ch,i,j,in=1;

		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5-i&&i<=3;j++)
			    System.out.print("\t");      //to leave space before stars for upper triangle

			for(j=1;j<=i-1&&i>3;j++) //to leave space before stars for lower triangle
         		    System.out.print("\t");      

			for(j=1;j<=in;j++)       //to display stars
		            System.out.print("*\t");

			if(i+1<=3)
				in=in+2;                //to decide no of stars in each row
			else
				in=in-2;
			System.out.print("\n");
		}
	}
}

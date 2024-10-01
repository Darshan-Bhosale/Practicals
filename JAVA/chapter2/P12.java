/* program to print
               A	B	C	D	C	B	A
			A	B	C	B	A
				A	B	A
 	                                A                           */
class P12
{
	public static void main(String args[])
	{
		int i=0,j=6,k=0;
		char x='A';

		while((j/2)>=0)
		{
			for(i=0;i<=(j/2);i++)
				System.out.print("  "+((char)(x+i)));
			i=i-2;
			for(;i>=0;i--)
				System.out.print("  "+((char)(x+i)));
			j=j-2;
			k=k+1;
			System.out.print("\n");
			for(i=0;i<=k;i++)
	    			 System.out.print("  ");
		}
	}
}


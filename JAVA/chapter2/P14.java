/* Program to display Pascal’s Triangle */ 

class P14
{
	public static void main(String args[])
	{
		int m=0,x,b;
		do
		{
			x=0;b=1;
			while(x<=m)
			{
				if(m==0||x==0)
					System.out.print("   "+b);
				else
				{
		 			b=b*(m-x+1)/x;
	 				System.out.print("   "+b);
				}
				x=x+1;
			}
			System.out.println("\n");
			m=m+1;
		}
		while(m<=5);
	}
}

		
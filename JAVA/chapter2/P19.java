/* Program to illustrate the study of approximate level of intelligence of a person  */

class P19
{
	public static void main(String args[])
	{
		int y;
		double i,x;

		System.out.println("  i \ty \tx");
		System.out.println("----------------------");
		for(y=1;y<=2;y++)
			for(x=5.5;x<=12.5;x=x+0.5)
			{
				i=2+(y+0.5*x);
				System.out.println(" "+i+"\t"+y+"\t"+x);
			}
	}
}


		
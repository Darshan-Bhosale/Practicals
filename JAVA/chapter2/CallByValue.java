/* Program to demonstrates Call by Value  */

class Sample
{
	void cal(int x,int y)
	{
		x=x+2;
		y=y-2;
	}
}

class CallByValue
{
	public static void main(String args[])
	{
		Sample s=new Sample();
		int p=20,q=10;

		System.out.println(" p and q Before call :"+p+", "+q);
		
		s.cal(p,q);

		System.out.println(" p and q After call  :"+p+", "+q);
	}
}
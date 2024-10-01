/* Program to demonstrates Call by reference  */

class Sample
{
	int p,q;

	Sample(int x,int y)
	{
		p=x;
		q=y;
	}

	// Pass an Object
	void cal(Sample obj)
	{
		obj.p=obj.p+2;
		obj.q=obj.q-2;
	}
}

class CallByRef
{
	public static void main(String args[])
	{
		Sample s=new Sample(20,10);
		
		System.out.println(" p and q Before call : "+s.p+", "+s.q);
		
		s.cal(s);

		System.out.println(" p and q After call  : "+s.p+", "+s.q);
	}
}
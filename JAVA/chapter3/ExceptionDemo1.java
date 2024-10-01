/* Program that intentionally causes a divide-by-zero error.*/

class ExceptionDemo1
{
	public static void main(String args[ ]) 
	{
		int i = 0;
		int j =500/i;
	}
}
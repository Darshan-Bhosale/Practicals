/* Program to demonstrate System.out.write() */

class WriteDemo
{
	public static void main(String args[ ]) 
	{
		int i; char c ; float f;double d;

		i = 'J';
		c = 'A';
		f = 'V';
		d = 'A';

		System.out.write(i);
		System.out.write(c);
		System.out.write((int)f);   // convertion from float to integer	
		System.out.write((int)d);   // convertion from double to integer	
		System.out.write('\n');	
	}
}	
		
	
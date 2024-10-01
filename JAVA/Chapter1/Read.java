import java.io.DataInputStream;

class Read
{
public static void main(String args[])
	{
		int i;
		float f;
DataInputStream in= new DataInputStream(System.in);
		try
		{
	
	System.out.println("Enter Integer number:");
	i=Integer.parseInt(in.readLine());

	System.out.println("Enter Float number:");
	f = Float.valueOf(in.readLine()).floatvalue();
		}
		catch(Exception e)
		{

		}

		System.out.println("Integer Number is : "+i);
		System.out.println("Float Number is : "+f);
	}
}
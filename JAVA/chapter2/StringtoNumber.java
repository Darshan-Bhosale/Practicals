
/* Program to illustrate reading data from keyboard */

import java.io.DataInputStream;      // load class for reading purpose

class StringtoNumber
{
	public static void main(String args[])
	{
		DataInputStream in = new DataInputStream(System.in); // creating object of class DataInputStream.
		int intNumber =0;
		float floatNumber = 0.0F;

		try
		{
			System.out.print("Enter an integer Number :");
			intNumber = Integer.parseInt(in.readLine());
			System.out.print("Enter a float Number :");
			floatNumber = Float.valueOf(in.readLine()).floatValue();
		
		}
		catch(Exception e) {    }

		System.out.println("Integer Number is : "+intNumber);
		System.out.println("Float Number is : "+floatNumber);
	}
}

		
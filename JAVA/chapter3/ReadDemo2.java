/* Read a string from console using a DataInputStream */

import java.io.*;    

class ReadDemo2
{
	public static void main(String args[ ]) throws IOException
	{
		//create a DataInputStream using System.in.
                DataInputStream in = new DataInputStream(System.in);    
         	String str;

		System.out.println("Enter lines of text ");
		System.out.println("Enter 'stop' to quit ");
		
		do
		{
			str = in.readLine( );
			System.out.println(str);		
		}while(!str.equals("stop"));		
	}
}	

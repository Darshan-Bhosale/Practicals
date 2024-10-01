/* Read multiple lines from console using a DataInputStream */

import java.io.*;    

class ReadDemo3
{
	public static void main(String args[ ]) throws IOException
	{
		//create a DataInputStream using System.in.
                DataInputStream in = new DataInputStream(System.in);    
         	String str[] = new String[500];

		System.out.println("Enter lines of text ");
		System.out.println("Enter 'stop' to quit ");
		
		for(int i =0;i<500;i++)
		{
			str[i] = in.readLine( );
			if(str[i].equals("stop")) break;		
		}
		System.out.println("\n Your File is :");
		
		// display the lines
		for(int i =0;i<500;i++)
		{
			if(str[i].equals("stop")) break;
			System.out.println(str[i]);
		}  		
	}
}	

/* Use a DataInputStream to read characters from the console */

import java.io.DataInputStream;    // load class for reading purpose

class ReadDemo1
{
	public static void main(String args[ ])
	{
		// creating object of class DataInputStream.
                   DataInputStream in = new DataInputStream(System.in);    
                   char c;

		try
		{
			System.out.println("Enter character 'E' to Exit : ");
			// read characters
			do
			{
				c = (char)in.read();
				System.out.println(c);		
			}while(c!='Q');
		
		}
	  	catch(Exception e) 
                {  
                          System.out.println("I/O Error"); 
                }
	}
}	

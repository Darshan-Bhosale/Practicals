/* Program for Question-Answer */

import java.io.DataInputStream;     // to load DataInputStream class         

class P26
{
	public static void main(String args[ ])
	{
		String ans = new String(); 
		boolean flag=false;
		DataInputStream in = new DataInputStream(System.in); 

		System.out.println("You have only three attempts to give answer of following Question");
		for(int i=0;i<3;i++)
		{
			try
			{
			     System.out.print(" Who is the inventor of C++ ? : "); 
			     ans = in.readLine();
			}
			catch(Exception e) {  System.out.println("I/O Error");   }

			if(ans.equals("Bjarne Stroustrup")||ans.equals("bjarne stroustrup"))
			{
				System.out.println(" Good "); 
				flag = true;
				break;
			}
			else if(i<=1)
				    System.out.println(" Try again..... "); 
		}

		if(flag==false)
		{
			System.out.println("\n Your three attempts are over..... ");
			System.out.println("\n C++ was invented by Bjarne Stroustrup in 1979");
		}
	}
}			
			

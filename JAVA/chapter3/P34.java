/* Program to add, delete and print an item in shopping list  */

import java.util.*;
import java.io.DataInputStream;     // to load DataInputStream class         
	
class P34
{
	public static void main(String args[ ])
	{
		Vector v = new Vector(5,2);
		int count=0,i,choice, position;
		String str = new String();
		boolean flag = false; 
		String ans = "yes";
		DataInputStream in = new DataInputStream(System.in); 

		count =args.length;
		for(i=0;i<count;i++)
			v.addElement(args[i]);
		try
		{
		    System.out.println("\n*********** Super Market **********\n");
		    do
		    {
			System.out.println("\nSelect Any option (1 to 5)");
			System.out.println("\t1.   Delete an item ");
			System.out.println("\t2.   Add an item at a specific location ");
			System.out.println("\t3.   Add an item at the end of the list ");
			System.out.println("\t4.   Display Shopping List ");
			System.out.println("\t5.   Exit ");
			choice = Integer.parseInt(in.readLine());

			System.out.println();
			switch(choice)
			{
				case 1:
					/* Delete an Item */
					System.out.print("Enter the item which you want to delete from shopping list : ");
					str = in.readLine();
					flag = v.removeElement(str);
					if(flag==false) 
					     System.out.println(" Item is not in the shopping list");
					break;
				case 2:
					/* Add an item at a specific location */
					System.out.print("Enter the item which you want to add in shopping list : ");
					str = in.readLine();
					System.out.print("Enter a specific location where you want to add an item : ");
					position = Integer.parseInt(in.readLine()); 
					v.insertElementAt(str,position-1);
					break; 
				case 3:
					/* Add an item at the end of the list */
					System.out.print("Enter the item which you want to add in shopping list : ");
					str = in.readLine();
					v.addElement(str);
					break;
				case 4:
					/* Display Shopping List */
					Enumeration vEnum = v.elements();

 					System.out.println("\nItems in Shopping list are:");
					while(vEnum.hasMoreElements())
						System.out.println("\t"+vEnum.nextElement() +"   ");
					//System.out.println();
					break;
				default:
					System.exit(0);
			}
			System.out.print("Do you Want to continue ? (Yes/No) : ");
			ans=in.readLine();
		    }while(ans.equalsIgnoreCase("yes"));
			
		}
		catch(Exception e)  {   System.out.println("I/O Error");   }

		
	}
}


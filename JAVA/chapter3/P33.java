/* Program that accepts a shopping list of five items from the command line and stores them in a vector */

import java.util.*;
	
class P33
{
	public static void main(String args[ ])
	{
		int count=0,i;
		Vector v = new Vector(5,2);

		count =args.length;
		for(i=0;i<count;i++)
			v.addElement(args[i]);

		//****** Enumerate the elements in the Vector *********
		Enumeration vEnum = v.elements();

 		System.out.println("\nItems in Shopping list are:");
		while(vEnum.hasMoreElements())
			System.out.println("\t"+vEnum.nextElement() +"   ");
		System.out.println();
	}
}


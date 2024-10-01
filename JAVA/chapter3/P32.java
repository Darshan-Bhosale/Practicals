/* Program to store various types of objects in Vector */

import java.util.*;

class Person
{
	String FirstName = new String();
	String LastName = new String(); 

	Person(String Fname, String Lname)
	{
		FirstName = Fname;	
		LastName = Lname;
	}

	public String toString()
	{
		return ""+FirstName+" "+LastName;
	}
}
		
class P32
{
	public static void main(String args[ ])
	{
		// initial size is 4, increment is 2
		Vector v = new Vector(4,2);

		System.out.println("Initial size : "+v.size());
		System.out.println("Initial Capacity : "+v.capacity());

		v.addElement(new Integer(1));
		v.addElement(new Integer(2));

		v.addElement(new Float(5.25)); 
		
		Person p1 = new Person("Mahatma","Gandhi");
		v.addElement(p1); 

		v.addElement(new Double(20.53));
 
		Person p2 = new Person("Abdul","Kalam");
		v.addElement(p2); 

		v.addElement(new Integer(3));


		System.out.println("\nFirst element :"+(Integer)v.firstElement());
		System.out.println("Last element :"+(Integer)v.lastElement());


		//****** Enumerate the elements in the Vector *********
		Enumeration vEnum = v.elements();

 		System.out.println("\nElements in vector :");
		while(vEnum.hasMoreElements())
			System.out.println(vEnum.nextElement() +"   ");
		System.out.println();
	}
}


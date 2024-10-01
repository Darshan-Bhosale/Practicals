/* Program to demonstrates various Vector Operation */
import java.util.*;

class VectorDemo
{
	public static void main(String args[ ])
	{
		// initial size is 4, increment is 2
		Vector v = new Vector(4,2);

		System.out.println("Initial size : "+v.size());
		System.out.println("Initial Capacity : "+v.capacity());

		v.addElement(new Integer(1));
		v.addElement(new Integer(2));
		v.addElement(new Integer(3));
		v.addElement(new Integer(4));
		v.addElement(new Integer(5));

		System.out.println("Capacity after five additions : "+v.capacity());
		v.addElement(new Double(5.25)); 
		System.out.println("Current Capacity : "+v.capacity());
		v.addElement(new Double(10.28)); 
		v.addElement(new Integer(8)); 

		System.out.println("Current Capacity : "+v.capacity());
		v.addElement(new Float(20.25)); 
		v.addElement(new Integer(10)); 

		System.out.println("Current Capacity : "+v.capacity());
		v.addElement(new Integer(11)); 
		v.addElement(new Integer(12)); 

		System.out.println("\nFirst element :"+(Integer)v.firstElement());
		System.out.println("Last element :"+(Integer)v.lastElement());

		if(v.contains(new Double(5.20)))
			System.out.println("Vector contains 5.20");

		//****** Enumerate the elements in the Vector *********
		Enumeration vEnum = v.elements();

 		System.out.println("\n Elements in vector :");
		while(vEnum.hasMoreElements())
			System.out.print(vEnum.nextElement() +"   ");
		System.out.println();
	}
}


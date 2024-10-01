/* Program which uses toStirng() method   */

import java.io.DataInputStream;     // to load DataInputStream class         

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
		return " Name of Person is : "+FirstName+" "+LastName+".";
	}
}
		
class P29
{
	public static void main(String args[ ])
	{
		Person p = new Person("Abdul","Kalam");
		System.out.println(p);
	}
}
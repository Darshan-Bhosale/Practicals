/*  Program to exchange the digits of 2-digit number */

class P8
{
public static void main(String args[])
	{
int number= 71, temp, tens;
System.out.println("\n The Original Number : "+number);

temp = number % 10;
tens = 10 * temp;
temp = number /10;
number = tens + temp ;
System.out.println("\n The Exchanged Number : "+number);
               
	}
}

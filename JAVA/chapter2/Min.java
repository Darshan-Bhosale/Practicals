/* Program to find Minimum of three numbers, using nested if else statements*/

class Min
{
	public static void main(String args[])
	{
		int n1, n2, n3;
		n1= 7;
		n2= 3;
		n3 = -3;

  		if (n1 < n2)
       		     if (n1 < n3) 
			 System.out.println("Smallest number is : "+n1);
       		     else 	
          		 System.out.println("Smallest number is : "+n3);
		else  // n1 >= n2
        	     if (n2 < n3)
 		          System.out.println("Smallest number is "+n2);
       		     else
 			  System.out.println("Smallest number is "+n3);
	}
}

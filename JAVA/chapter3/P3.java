/* Program to implement Binary Search */

import java.io.DataInputStream;   // to load DataInputStream class           

class P3
{
	public static void main(String args[ ])
	{
		int list[]= new int[20];
		int number=0, result = 0;
		int i, n=0, low ,mid=0, high=0;
		DataInputStream in = new DataInputStream(System.in); 

		try
		{
			System.out.print("Enter the number of elements : ");
			n = Integer.parseInt(in.readLine());
			System.out.println("Enter elements in ascending order : ");
			for(i=0; i<n; i++)
      				list[i]= Integer.parseInt(in.readLine());
			System.out.print("Enter the number to be searched : ");
			number = Integer.parseInt(in.readLine());;
		}
		catch(Exception e) {  System.out.println("I/O Error");   }
		
		low = 0;
		high = n-1;
		while(low <= high)
		{
        		mid = (low+ high) / 2;
        		if (number < list [mid])
                		high = mid - 1;
        		else if(number>list[mid])
                 		low = mid + 1;
         		else
         		{
                 		result = list[mid];
                 		break;
         		}
  		}
  		if (result == 0)
        		System.out.println(" \n No match found");
  		else if(result != 0)
  		{
       			System.out.println(" Match found ");
       			System.out.println(" Position of number "+number+" is : "+(mid +1));
   		}
        }
} 

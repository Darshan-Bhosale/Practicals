/* Program to search a given integer in an array of integers*/

import java.io.DataInputStream;   // to load DataInputStream class           

class P2
{
	public static void main(String args[ ])
	{
		int arr[]= new int[20];
		int num=0, i, subscript;
		DataInputStream in = new DataInputStream(System.in); 
		
		try
		{
			System.out.println("  Input 5 array elements : ");
			for(i=0;i<5;i++)
     				arr[i] = Integer.parseInt(in.readLine());
			System.out.print(" Enter number to be searched : ");
			num= Integer.parseInt(in.readLine());
		}
		catch(Exception e) {  System.out.println("I/O Error");   }

		if((subscript = search(arr,num)) == -1)
         		System.out.println(" No such element !! ");
		else
         		System.out.println(" Element found at : "+subscript);		
	}

	static int search(int arr[], int num)
	{
         	int i ;
             	for(i=0; i<5; i++)           	
                   if (arr[i] == num)
                           return (i+1);
             	return -1;
     	}

}


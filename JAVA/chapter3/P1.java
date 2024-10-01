/* Program to perform sorting and to display largest and second largest elements in the list */

import java.io.DataInputStream;   // to load DataInputStream class           

class P1
{
	static void bubble(int x[ ], int n)
	{
   		int hold, j, pass;
   		int switched = 1;
   		for(pass=0; pass<n-1 && switched==1; pass++)
   		{    // Outer loop controls the number of passes
        		switched = 0;
        	     // Initially no interchange have been made on this pass
        		for(j=0; j<n-pass-1; j++)
        		// Inner loop governs each individual pass
               			if (x[j] > x[j+1])
               			 {
                    			 //Interchange elements if they are out of order
                      			switched = 1;
                      			hold=x[j];
                      			x[j] = x[j+1];
                      			x[j+1] = hold;
                 		}          //end if
      		}                    // end for
	}    // end bubble function

	public static void main(String args[ ])
	{
		int i, n=0;
		int x[] = new int[20];
		DataInputStream in = new DataInputStream(System.in); 
		try
		{
			System.out.print(" Enter numbers of elements :");
			n = Integer.parseInt(in.readLine());
			System.out.println(" \n Enter Numbers in any order : ");
			for(i=0; i<n; i++)
			{
      				System.out.print("\n Element["+i+"] = ");
      				x[i] = Integer.parseInt(in.readLine());
			}
		}
		catch(Exception e) {  System.out.println("I/O Error");   }

		bubble(x,n);

		System.out.println(" \n \nSorted Elements in Ascending order are : ");
		for(i=0; i<n; i++)
      			System.out.println(" \n Element["+i+"] = "+x[i]);

		// Displays the largest and 2nd largest element from sorted list
		System.out.println(" \n Largest Element is : "+x[n-1]);
		System.out.println(" \n Second largest Element is : "+x[n-2]);
		
	}
}

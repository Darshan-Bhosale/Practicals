/* Program to represent Bank Account- Using Constructor */

import java.io.DataInputStream;   // to load DataInputStream class 

class Bank
{
	String name,type;
	int acno,bal,wit,dep;

	// To assign initial values by constructor
	Bank(String n, String t,int b)
	{
		name=n;
		type=t;
		bal=b;
	}
	

	// To deposit an amount
	void deposit()
	{
		//creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 

		try
	       {

			System.out.print(" Enter amt to deposit : ");
			dep = Integer.parseInt(in.readLine());
	
			bal=bal+dep;
			show();
		}
		catch(Exception e) {  System.out.println("I/O Error");   }
	}

	// To withdraw an amount after checking balance
	void withdraw()
	{
		
		//creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 

		try
	       {

			System.out.println("\nEnter amt to withdraw : ");
			wit = Integer.parseInt(in.readLine());
			if(bal-wit>=500)
				bal=bal-wit;
			else
				System.out.println("You cannot withdraw....");
			show();
		}

		catch(Exception e) {  System.out.println("I/O Error");   }
	}


	// To display the name and balance
	void show()
	{
		System.out.println("\nDepositor name :"+name);
		System.out.println("Type of Account :"+type);
		System.out.println("Balance :"+bal);
	}
}

class P25
{
	public static void main(String args[ ])
	{
		int choice;
		int ans;
		Bank b1=new Bank("Stavan","Saving",50000);  //providing initial value by constructor
		
		b1.show();

		//creating object of class DataInputStream.
                DataInputStream in = new DataInputStream(System.in); 
		
		try
	       {
			do
			{
				System.out.println("\n1. Deposit");
				System.out.println("2. Withdraw");
				System.out.print("Enter your choice (1/2) :");
				choice = Integer.parseInt(in.readLine());

				if(choice ==1)
				     b1.deposit();		
				if(choice ==2)
				     b1.withdraw();
				System.out.println("\nDo you want to continue ?(1: yes /0 : No)");
				ans = Integer.parseInt(in.readLine());
			}while(ans==1);
		}
		catch(Exception e) {  System.out.println("I/O Error");   }

	}
}	
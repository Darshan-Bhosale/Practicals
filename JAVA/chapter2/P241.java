/* Program to represent Bank Account */

import java.util.Scanner;   // to load DataInputStream class 

class Bank
{
	String name,type;
	int acno,bal,wit,dep;

	// To assign initial values
	void getdata()
	{
		//creating object of class DataInputStream.
               Scanner in = new Scanner(System.in); 
		
			System.out.print(" Enter Name of Account Holder : ");
			name=in.nextLine();
			System.out.print(" Enter Type of Account : ");
			type=in.next();				
			System.out.print(" Enter initial amount in Account : ");
			bal = in.nextInt();
		
	}

	// To deposit an amount
	void deposit()
	{
		//creating object of class DataInputStream.
   Scanner in = new Scanner(System.in); 

		
			System.out.print(" Enter amt to deposit : ");
			dep = in.nextInt();
	
			bal=bal+dep;
			show();
	}

	// To withdraw an amount after checking balance
	void withdraw()
	{
		
		//creating object of class DataInputStream.
   Scanner in = new Scanner(System.in); 

			System.out.println("\nEnter amt to withdraw : ");
			wit = in.nextInt();
			if(bal-wit>=500)
				bal=bal-wit;
			else
				System.out.println("You cannot withdraw....");
			show();
	}


	// To display the name and balance
	void show()
	{
		System.out.println("\nDepositor name :"+name);
		System.out.println("Type of Account :"+type);
		System.out.println("Balance :"+bal);
	}
}

class P241
{
	public static void main(String args[ ])
	{
		int choice;
		int ans;
		Bank b1=new Bank();
		b1.getdata();

		

		//creating object of class DataInputStream.
Scanner in = new Scanner(System.in);
		
		
			do
			{
				System.out.println("\n1. Deposit");
				System.out.println("2. Withdraw");
				System.out.print("Enter your choice (1/2) :");
				choice = in.nextInt();

				if(choice ==1)
				     b1.deposit();		
				else
				     b1.withdraw();
				System.out.println("\nDo you want to continue ?(1: yes /0 : No)");
				ans = in.nextInt();
			}while(ans==1);
		}
		
}	
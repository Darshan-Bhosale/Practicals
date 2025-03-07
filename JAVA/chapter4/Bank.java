
abstract class Account
{
		protected int number;
		protected String name;
		Account(int no, String na)
		{
			number=no;
			name=na;
		}
		abstract void display();
}


class SavingsAccount extends Account
{
		int balance;
		SavingsAccount(int no,String na,int ba)
		{
			super(no,na);
			balance=ba;
		}
		void display()
		{
			System.out.println("Savings Account Details --- ");
			System.out.println("Number : "+number);
			System.out.println("Name   : "+name);
			System.out.println("Balance : "+balance);
		}
}



abstract class DepositAccount extends Account
{
		protected int amount;
		protected String maturity_date;
		protected String opening_date;
		DepositAccount(int no,String na,int amt,String md,String od)
		{
			super(no,na);
			amount=amt;
			maturity_date=md;
			opening_date=od;
		}

}

class ShortTerm extends DepositAccount
{
		int no_of_months;
		ShortTerm(int no,String na,int amt,String md,String od,int nm)
		{
			super(no,na,amt,md,od);
			no_of_months=nm;
		}
		void display()
		{
			System.out.println("Short Term Deposit Account Details --- ");
			System.out.println("Number : "+number);
			System.out.println("Name   : "+name);
			System.out.println("Amount : "+amount);
			System.out.println("Maturity Date : "+maturity_date);
			System.out.println("Date of Opening : "+opening_date);
			System.out.println("Duration in Months : "+no_of_months);
	}
}


class LongTerm extends DepositAccount
{
		int no_of_years;

		LongTerm(int no,String na,int amt,String md,String od,int ny)
		{
			super(no,na,amt,md,od);
			no_of_years=ny;

		}

		void display()
		{
			System.out.println("Long Term Deposit Account Details --- ");
			System.out.println("Number : "+number);
			System.out.println("Name   : "+name);
			System.out.println("Amount : "+amount);
			System.out.println("Maturity Date : "+maturity_date);
			System.out.println("Date of Opening : "+opening_date);
			System.out.println("Duration in Years : "+no_of_years);

		}

}



class Bank
{

public static void main(String args[])
{
	SavingsAccount sa=new SavingsAccount(101,"Bhakti Raul",1000000);
	ShortTerm st=new ShortTerm(405,"Samarth Rane",1000000,"1/1/2008", "1/1/2007",12);
	LongTerm lt=new LongTerm(302,"Stavan Chavan",1000000,"1/3/2010","1/3/2006",4);
	sa.display();
	st.display();
	lt.display();


}
}
/*
Savings Account Details ---
Number : 101
Name   : Bhakti Raul
Balance : 1000000

Short Term Deposit Account Details ---
Number : 405
Name   : Samarth Rane
Amount : 1000000
Maturity Date : 1/1/2008
Date of Opening : 1/1/2007
Duration in Months : 12

Long Term Deposit Account Details ---
Number : 302
Name   : Stavan Chavan
Amount : 1000000
Maturity Date : 1/3/2010
Date of Opening : 1/3/2006
Duration in Years : 4
*/
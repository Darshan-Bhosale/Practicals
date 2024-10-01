
class staff
{

	private int code;
    private String name;
    private String address;

	staff(int c,String n,String a)
	{
		code=c;
		name=n;
		address=a;
	}

	void showdata()
	{
		  System.out.println("Code = "+code);
          System.out.println("Name = "+name);
          System.out.println("Address = "+address);
	}
}


class teacher extends staff
{
	private	String subject;
	private String publication;

	teacher(int c,String n,String a,String s,String p)
	{
		super(c,n,a);
		subject=s;
		publication=p;
	}

	void showdata()
	{
		super.showdata();
		System.out.println("Subject = "+subject);
		System.out.println("Publication = "+publication);
	}
}

class officer extends staff
{
	private	String grade;

	officer(int c,String n,String a,String g)
	{
		super(c,n,a);
		grade=g;
	}

	void showdata()
	{
		super.showdata();
		System.out.println("Grade = "+grade);
	}
}

class typist extends staff
{
	private int speed;

	typist(int c,String n,String a,int s)
	{
		super(c,n,a);
		speed=s;
	}

	void showdata()
	{
		super.showdata();
		System.out.println("Speed = "+speed);
	}
}


class casual extends typist
{
	private	int dailywages;

	casual(int c,String n,String a,int s,int dw)
	{
		super(c,n,a,s);
		dailywages=dw;
	}

	void showdata()
	{
		super.showdata();
		System.out.println("Dailywages = "+dailywages);
	}
}

class regular extends typist
{
	private	int pay;

	regular(int c,String n,String a,int s,int p)
	{
		super(c,n,a,s);
		pay=p;
	}

	void showdata()
	{
		super.showdata();
		System.out.println("Monthly Pay = "+pay);
	}
}

class Employees
{

public static void main(String args[])
{
 casual c=new casual(1001,"Sharad","Borivali",40,100);
 officer o=new officer(2001,"Shrikanth","Dadar","A");
 teacher t=new teacher(3001,"Smita","Parel","Maths","Tect-Max Publications");
 regular r=new regular(4001,"Anil","Vidyavihar",30,5000);

 c.showdata();
 o.showdata();
 t.showdata();
 r.showdata();
}
}
/*
Code = 1001
Name = Sharad
Address = Borivali
Speed = 40
Dailywages = 100

Code = 2001
Name = Shrikanth
Address = Dadar
Grade = A

Code = 3001
Name = Smita
Address = Parel
Subject = Maths
Publication = Tect-Max Publications

Code = 4001
Name = Anil
Address = Vidyavihar
Speed = 30
Monthly Pay = 5000
*/
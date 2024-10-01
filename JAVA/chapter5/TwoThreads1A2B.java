class A extends Thread
{
public void run()
{
	for(int i=1;i<=10;i++)
	{
		System.out.print(i);
				try
	  			{
					Thread.sleep(500);
				}
				catch(InterruptedException e)
				{
				System.out.println("threadA interrupted " );
				}
	}
	System.out.println();
	System.out.println("Exiting threadA " );
}
}

class B extends Thread
{
public void run()
{
	for(char i=65;i<=74;i++)
	{
		System.out.print(i);
				try
	  			{
					Thread.sleep(500);
				}
				catch(InterruptedException e)
				{
				System.out.println("threadB interrupted " );
				}
	}
	System.out.println("Exiting threadB" );
}
}

class TwoThreads1A2B
{
	public static void main(String args[])
	{
		A a =new A();
		a.start();
		B b =new B();
		b.start();
		try
		{
        a.join();
        b.join();
		}
		catch(InterruptedException e)
		{
			System.out.println("Main thread interrupted " );
		}
		System.out.println("Exiting main thread ");
	}
}

/*
1A2B3C4D5E6F7G8H9I10J
Exiting threadA
Exiting threadB
Exiting main thread
*/
class A extends Thread
{
public void start()
{
	for(int i=1;i<=5;i++)
	{
		System.out.println("threadA : "+i);
		try
		{
		Thread.sleep(1000);
		}
		catch(InterruptedException e)
		{
			System.out.println("Thread Interrupted");
		}

	}
}
}
class StartThread
{
	public static void main(String args[])
	{
		A a =new A();
		a.start();
		for(int i=1;i<=5;i++)
		{
			System.out.println("Main thread : "+i);
			try
			{
				Thread.sleep(500);
			}
			catch(InterruptedException e)
			{
				System.out.println("Thread Interrupted");
			}
		}

	}
}
/*
the program will be compiled suceesfully, but multithreading will not be achieved
we have defined method public void start() instead of public void run().
so a.start becomes a normal method invocation.
output:

threadA : 1
threadA : 2
threadA : 3
threadA : 4
threadA : 5
Main thread : 1
Main thread : 2
Main thread : 3
Main thread : 4
Main thread : 5
*/
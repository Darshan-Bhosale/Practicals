class A extends Thread
{
public void run()
{
	for(int i=1;i<=5;i++)
	{
		System.out.println("threadA : "+i);
		Thread.sleep(1000);
	}
}
}
class ThreadClass
{
	public static void main(String args[])
	{
		A a =new A();
		a.start();
	}
}

/*
the program will not be compiled because Thread.sleep throws InterruptedException which must be caught */
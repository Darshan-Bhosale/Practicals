class A extends Thread
{
public void run()
{
	for(int i=1;i<=5;i++)
	{
		System.out.println("threadA : "+i);

	}
}
}
class B extends Thread
{
public void run()
{
	for(int i=1;i<=5;i++)
	{
		System.out.println("threadB : "+i);

	}
}
}

class ThreadPri
{
	public static void main(String args[])
	{
		A a =new A();
		B b =new B();
		a.setPriority(Thread.MIN_PRIORITY);
		b.setPriority(Thread.MIN_PRIORITY);
		a.start();
		b.start();

	}
}
/*
threadA : 1
threadA : 2
threadA : 3
threadA : 4
threadA : 5
threadB : 1
threadB : 2
threadB : 3
threadB : 4
threadB : 5
*/
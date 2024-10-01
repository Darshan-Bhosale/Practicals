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

class ThreadMax
{
	public static void main(String args[])
	{
		A a =new A();
		B b =new B();
		b.setPriority(Thread.MAX_PRIORITY);
		a.run();
		b.run();

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

/*
if we use start method..
a.start();
b.start();

output:

threadB : 1
threadB : 2
threadB : 3
threadB : 4
threadB : 5
threadA : 1
threadA : 2
threadA : 3
threadA : 4
threadA : 5
*/
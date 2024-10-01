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
class B implements Runnable
{
public void run()
{
	for(int i=1;i<=5;i++)
	{
		System.out.println("threadB : "+i);

	}
}
}

class MultiCheck
{
	public static void main(String args[])
	{
		A a =new A();
		a.start();
		B b =new B();
		b.start();

	}
}

/*the program will not be compiled because
b is an object of class B which is not extended from Thread class.
The class MultiCheck has to be modified as shown below:

class MultiCheck
{
	public static void main(String args[])
	{
		A a =new A();
		a.start();
		B b =new B();
		Thread t=new Thread(b);
		t.start();

	}
}

Output:

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
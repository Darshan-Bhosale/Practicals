class A extends Thread
{
public void run()
{
	System.out.println("Begin ");
	start();
	System.out.println("End ");


}

public void start()
{

}
}


class ThreadTest
{
	public static void main(String args[])
	{
	A a =new A();
	a.start();
	}
}
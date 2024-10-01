class ChildThread implements Runnable
{
	String name;
	Thread t;
	boolean suspendFlag;
	ChildThread(String threadname)
	{
		name=threadname;
		t=new Thread(this,name);
		System.out.println("New Thread : "+t);
		suspendFlag=false;
		t.start();
	}

	public void run()
	{
		try
		{
			for(int i=1;i<=10;i++)
			{
				System.out.println(name+" : "+i);
				Thread.sleep(200);
				synchronized(this)
				{
					while(suspendFlag)
					{
						wait();
					}
				}
			}
		}
		catch(InterruptedException e)
		{
			System.out.println(name+"interrupted");
		}
		System.out.println(name+" exiting");
	}

	void suspendThread()
	{
		suspendFlag=true;
	}

	synchronized void resumeThread()
	{
		suspendFlag=false;
		notify();
	}
}


class SuspendResume
{
	public static void main(String args[])
	{
		ChildThread t1=new ChildThread("One");
		ChildThread t2=new ChildThread("Two");
		try
		{
			Thread.sleep(500);
			System.out.println("Suspending thread one");
			t1.suspendThread();
			Thread.sleep(500);
			System.out.println("Resuming thread one");
			t1.resumeThread();
			System.out.println("Suspending thread two");
			t2.suspendThread();
			Thread.sleep(500);
			System.out.println("Resuming thread two");
			t2.resumeThread();

		}
		catch(InterruptedException e)
		{
			System.out.println("Main thread interrupted ");
		}
		try
		{
			System.out.println("waiting for threads to finish");
			t1.t.join();
			t2.t.join();
		}
		catch(InterruptedException e)
		{
			System.out.println("Main thread interrupted");
		}
		System.out.println("Main thread exiting ");
	}
}
/*
New Thread : Thread[One,5,main]
New Thread : Thread[Two,5,main]
Two : 1
One : 1
Two : 2
One : 2
Two : 3
One : 3
Suspending thread one
Two : 4
Two : 5
Resuming thread one
One : 4
Suspending thread two
One : 5
One : 6
Resuming thread two
waiting for threads to finish
Two : 6
One : 7
Two : 7
One : 8
Two : 8
One : 9
Two : 9
One : 10
Two : 10
One exiting
Two exiting
Main thread exiting
*/
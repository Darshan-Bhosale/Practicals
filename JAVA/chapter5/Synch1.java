 class ThreadSafeCounter
{
   private int count = 0;  // The value of the counter.
  public void increment()
   {
       count = count + 1;
        try
        {
        	Thread.sleep(500);
   		}
   		catch(InterruptedException e)
   		{
		}
       System.out.println("Count : "+count);
   }

   }


class Ourthread extends Thread
{
	ThreadSafeCounter tsc;
	Ourthread(ThreadSafeCounter t)
	{
		tsc=t;
	}
	public void run()
	{
		tsc.increment();

	}
}


class Synch1
{
public static void main(String args[])
{
ThreadSafeCounter tsc=new ThreadSafeCounter();
Ourthread t1=new Ourthread(tsc);
Ourthread t2=new Ourthread(tsc);

t1.start();
t2.start();

try
{
t1.join();
t2.join();

}
catch(InterruptedException e)
{
}
System.out.println("End of main thread");
}
}
/*
Count : 2
Count : 2
End of main thread
*/
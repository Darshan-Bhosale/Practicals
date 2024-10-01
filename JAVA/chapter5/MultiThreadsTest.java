 class NamedThread extends Thread
 {
   private String name;  // The name of this thread.
   public NamedThread(String name)
   {  // Constructor gives name to thread.
      super(name);
      this.name = name;
	  System.out.println(this);
      start();
   }
   public void run()
   {  // The run method prints a message to standard output.
         for (int i=1; i<=10;i++)
	      	{
	  			System.out.println("Greetings from : "+name);
	  		}
	System.out.println("End of child thread!");


   }
}

class MultiThreadsTest
{
public static void main(String args[])
{
	new NamedThread("Child Thread 1");
	new NamedThread("Child Thread 2");
	new NamedThread("Child Thread 3");

	for (int i=1; i<=10;i++)
	{
		System.out.println("Main Thread ");
	}
	System.out.println("End of main thread!");
}
}

/*
Thread[Child Thread 1,5,main]
Thread[Child Thread 2,5,main]
Thread[Child Thread 3,5,main]
Greetings from : Child Thread 1
Greetings from : Child Thread 2
Greetings from : Child Thread 1
Greetings from : Child Thread 2
Greetings from : Child Thread 1
Greetings from : Child Thread 2
Greetings from : Child Thread 1
Greetings from : Child Thread 2
Greetings from : Child Thread 1
Greetings from : Child Thread 2
Greetings from : Child Thread 1
Greetings from : Child Thread 2
Threads have been started.
Greetings from : Child Thread 1
Greetings from : Child Thread 3
Main Thread
Greetings from : Child Thread 1
Greetings from : Child Thread 3
Main Thread
Greetings from : Child Thread 1
Greetings from : Child Thread 3
Main Thread
Greetings from : Child Thread 1
Greetings from : Child Thread 3
Main Thread
End of child thread!
Greetings from : Child Thread 3
Main Thread
Greetings from : Child Thread 2
Greetings from : Child Thread 3
Greetings from : Child Thread 2
Main Thread
Greetings from : Child Thread 2
Main Thread
Greetings from : Child Thread 2
Main Thread
End of child thread!
Main Thread
Main Thread
End of main thread!
Greetings from : Child Thread 3
Greetings from : Child Thread 3
Greetings from : Child Thread 3
Greetings from : Child Thread 3
End of child thread!
*/
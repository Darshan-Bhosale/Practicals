 class NamedThread extends Thread
 {
   private String name;  // The name of this thread.
   NamedThread(String name)
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

class ExtendThread
{
public static void main(String args[])
{
	new NamedThread("Child Thread");



	System.out.println("Thread has been started.");
	for (int i=1; i<=10;i++)
	{
		System.out.println("Main Thread ");
	}
	System.out.println("End of main thread!");
}
}

/*
Thread[Child Thread,5,main]
Thread has been started.
Main Thread
Main Thread
Main Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
Greetings from : Child Thread
End of child thread!
Main Thread
Main Thread
Main Thread
Main Thread
Main Thread
Main Thread
Main Thread
End of main thread!
*/
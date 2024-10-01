 class NamedThread extends Thread
 {
   private String name;  // The name of this thread.
   public NamedThread(String name)
   {  // Constructor gives name to thread.
      this.name = name;
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

class ExtendTest
{
public static void main(String args[])
{
	NamedThread greetings = new NamedThread("Child Thread");
	greetings.start();
	System.out.println("Thread has been started.");
	for (int i=1; i<=10;i++)
	{
		System.out.println("Main Thread ");
	}
	System.out.println("End of main thread!");
}
}
/*
Thread has been started.
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
Main Thread
End of main thread!
*/
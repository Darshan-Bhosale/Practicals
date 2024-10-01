class NamedRunnable implements Runnable
{
   private String name;  // The name of this thread.
   public NamedRunnable(String name)
   {  // Constructor gives name to object.
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

class RunnableTest2
{
	public static void main(String args[])
	{
		NamedRunnable greetings = new NamedRunnable("Child Thread");
		Thread greetingsThread = new Thread(greetings);
		greetingsThread.start();
		for (int i=1; i<=10;i++)
		    	{
					System.out.println("Main Thread ");
		}
		System.out.println("End of main thread!");
	}

}
/*
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
Press any key to continue . . .
*/
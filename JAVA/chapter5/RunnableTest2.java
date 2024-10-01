class NamedRunnable implements Runnable
{
   private String name;  // The name of this thread.
   public NamedRunnable(String name)
   {  // Constructor gives name to object.
   this.name=name;
   Thread greetingsThread = new Thread(this,this.name);
   System.out.println(greetingsThread);
   greetingsThread.start();
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

class RunnableTest3
{
	public static void main(String args[])
	{
		NamedRunnable greetings = new NamedRunnable("ChildThread");

		for (int i=1; i<=10;i++)
		    	{
					System.out.println("Main Thread ");
		}
		System.out.println("End of main thread!");
	}

}
/*
Thread[ChildThread,5,main]
Main Thread
Main Thread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
Greetings from : ChildThread
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

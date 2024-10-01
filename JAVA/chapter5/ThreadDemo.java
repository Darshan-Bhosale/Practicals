class ThreadDemo
{
public static void main(String main[])
{
	Thread t=Thread.currentThread();
	System.out.println("Current Thread : "+t);
	//change the name of the thread
	t.setName("My thread");
	System.out.println("Current Thread after name changed : "+t);
	System.out.println("Number of active threads : "+t.activeCount());


}
}

/*
Current Thread : Thread[main,5,main]
Current Thread after name changed : Thread[My thread,5,main]
Number of active threads : 1
*/
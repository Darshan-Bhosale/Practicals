 class A implements Runnable
  {
	String name;
	Thread ThreadA;
    A(String Threadname)
    {
		name=Threadname;
		ThreadA=new Thread(this,name);
		System.out.println("New Thread : "+ThreadA);
		ThreadA.start();
	}
    public void run()
    {
          for (int i=1; i<=5;i++)
 	      	{

 	  			System.out.println(ThreadA.getName()+" : "+ i);
				try
	  			{
					ThreadA.sleep(500);
				}
				catch(InterruptedException e)
				{

				}
 	  		}

 	System.out.println("End of child Thread : "+ThreadA.getName());


    }
}


class B implements Runnable
 {
	String name;
	Thread ThreadB;
    B(String Threadname)
    {
		name=Threadname;
		ThreadB=new Thread(this,name);
		System.out.println("New Thread : "+ThreadB);
		ThreadB.start();
	}
   public void run()
   {
         for (int j=1; j<=5;j++)
	      	{
	  			System.out.println(ThreadB.getName()+" : "+ j);
				try
	  			{
					ThreadB.sleep(500);
				}
				catch(InterruptedException e)
				{

				}

	  		}
	System.out.println("End of child Thread : "+ThreadB.getName());


   }
}


class C implements Runnable
 {

	String name;
	Thread ThreadC;
    C(String Threadname)
    {
		name=Threadname;
		ThreadC=new Thread(this,name);
		System.out.println("New Thread : "+ThreadC);
		ThreadC.start();
	}
   public void run()
   {
	   for (int k=1; k<=5;k++)
	   {
	  			System.out.println(ThreadC.getName()+" : "+ k);
	  			try
	  			{
					ThreadC.sleep(500);
				}
				catch(InterruptedException e)
				{

				}

	  	}
	System.out.println("End of child Thread : "+ThreadC.getName());


   }
}

class IsaliveJoinRunnable
{
public static void main(String args[])
{
	A a=new A("A");
	B b=new B("B");
	C c=new C("C");


	System.out.println("Thread A is alive : "+a.ThreadA.isAlive());

	System.out.println("Thread B is alive : "+b.ThreadB.isAlive());

	System.out.println("Thread C is alive : "+c.ThreadC.isAlive());

	for (int k=1; k<=5;k++)
	{
		System.out.println("Main Thread  : "+ k);
				try
	  			{
					Thread.sleep(500);
				}
				catch(InterruptedException e)
				{

				}
	}

	try
	{

	a.ThreadA.join();
	b.ThreadB.join();
	c.ThreadC.join();
	}
	catch(InterruptedException e)
	{
	System.out.println("Main Thread  interrupted");
	}

	System.out.println("End of main Thread!");

	System.out.println("Thread A is alive : "+a.ThreadA.isAlive());
	System.out.println("Thread B is alive : "+b.ThreadB.isAlive());
	System.out.println("Thread C is alive : "+c.ThreadC.isAlive());
}
}
/*
New Thread : Thread[A,5,main]
New Thread : Thread[B,5,main]
New Thread : Thread[C,5,main]
Thread A is alive : true
A : 1
B : 1
C : 1
Thread B is alive : true
Thread C is alive : true
Main Thread  : 1
A : 2
B : 2
C : 2
Main Thread  : 2
A : 3
B : 3
C : 3
Main Thread  : 3
A : 4
B : 4
C : 4
Main Thread  : 4
A : 5
B : 5
C : 5
Main Thread  : 5
End of child Thread : A
End of child Thread : B
End of child Thread : C
End of main Thread!
Thread A is alive : false
Thread B is alive : false
Thread C is alive : false
*/
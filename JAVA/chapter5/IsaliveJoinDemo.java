 class A extends Thread
  {

    public void run()
    {
          for (int i=1; i<=5;i++)
 	      	{
 	  			if (i==2)
 	  				yield();
 	  			System.out.println(this.getName()+" : "+ i);

 	  		}

 	System.out.println("End of child thread : "+this.getName());


    }
}


class B extends Thread
 {

   public void run()
   {
         for (int j=1; j<=5;j++)
	      	{
	  			System.out.println(this.getName()+" : "+ j);


	  		}
	System.out.println("End of child thread : "+this.getName());


   }
}


class C extends Thread
 {

   public void run()
   {
	   for (int k=1; k<=5;k++)
	   {
	  			System.out.println(this.getName()+" : "+ k);
	  			try
	  			{
					sleep(500);
				}
				catch(InterruptedException e)
				{

				}

	  	}
	System.out.println("End of child thread : "+this.getName());


   }
}

class IsaliveJoinDemo
{
public static void main(String args[])
{
	A threadA=new A();
	B threadB=new B();
	C threadC=new C();

	threadA.setName("Thread A");
	threadB.setName("Thread B");
	threadC.setName("Thread C");


	System.out.println("Start Thread A");
	threadA.start();
	System.out.println("Thread A is alive : "+threadA.isAlive());

	System.out.println("Start Thread B");
	threadB.start();
	System.out.println("Thread B is alive : "+threadB.isAlive());

	System.out.println("Start Thread C");
	threadC.start();
	System.out.println("Thread C is alive : "+threadC.isAlive());

	for (int k=1; k<=5;k++)
	{
		System.out.println("Main Thread  : "+ k);
	}

	try
	{

	threadA.join();
	threadB.join();
	threadC.join();
	}
	catch(InterruptedException e)
	{
	System.out.println("Main Thread  interrupted");
	}

	System.out.println("End of main thread!");

	System.out.println("Thread A is alive : "+threadA.isAlive());
	System.out.println("Thread B is alive : "+threadB.isAlive());
	System.out.println("Thread C is alive : "+threadC.isAlive());
}
}
/*
Start Thread A
Thread A is alive : true
Thread A : 1
Start Thread B
Thread B is alive : true
Start Thread C
Thread C is alive : true
Main Thread  : 1
Main Thread  : 2
Main Thread  : 3
Main Thread  : 4
Thread A : 2
Thread B : 1
Thread C : 1
Thread A : 3
Thread B : 2
Thread A : 4
Thread B : 3
Thread A : 5
Thread B : 4
End of child thread : Thread A
Thread B : 5
Main Thread  : 5
End of child thread : Thread B
Thread C : 2
Thread C : 3
Thread C : 4
Thread C : 5
End of child thread : Thread C
End of main thread!
Thread A is alive : false
Thread B is alive : false
Thread C is alive : false

*/
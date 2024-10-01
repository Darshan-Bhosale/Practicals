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

class ThreadMethods
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

	System.out.println("Start Thread B");
	threadB.start();

	System.out.println("Start Thread C");
	threadC.start();

	for (int k=1; k<=5;k++)
	   {
	  			System.out.println("Main Thread  : "+ k);
	  			try
	  			{
					Thread.sleep(1000);
				}
				catch(InterruptedException e)
				{

				}

	  	}
	System.out.println("End of main thread!");
}
}
/*
Start Thread A
Start Thread B
Thread A : 1
Start Thread C
Main Thread  : 1
Thread A : 2
Thread A : 3
Thread A : 4
Thread A : 5
End of child thread : Thread A
Thread B : 1
Thread B : 2
Thread B : 3
Thread B : 4
Thread B : 5
End of child thread : Thread B
Thread C : 1
Thread C : 2
Main Thread  : 2
Thread C : 3
Thread C : 4
Main Thread  : 3
Thread C : 5
End of child thread : Thread C
Main Thread  : 4
Main Thread  : 5
End of main thread!
*/
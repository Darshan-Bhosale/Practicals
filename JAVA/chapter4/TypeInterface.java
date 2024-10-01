	 interface NewShape
	 {
		void draw();
	 }

	class NewCircle1 implements NewShape
	 {
		public void draw()
		{
			System.out.println("New class 1 drawn");
		}

	 }

	 class NewCircle2 implements NewShape
	 {
		public void draw()
		{
			System.out.println("New class 2 drawn");
		}
	 }

	 class TypeInterface
	 {
		public static void main(String args[])
		{
			NewShape nc1=new NewCircle1();
			NewShape nc2=new NewCircle2();
			nc1.draw();
			nc2.draw();

		}
	 }
		/*
New class 1 drawn
New class 2 drawn*/
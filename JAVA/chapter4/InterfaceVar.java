	 interface NewShape
	 {
		void draw();
		int radius=10;
	 }

	class NewCircle1 implements NewShape
	 {
		public void draw()
		{
			radius=12;
			System.out.println("radius = "+radius);		}

	 }



	 class InterfaceVar
	 {
		public static void main(String args[])
		{
			NewShape nc1=new NewCircle1();

			nc1.draw();


		}
	 }

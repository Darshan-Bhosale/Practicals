//superclass

abstract class vehicle
{
	protected String make;
	int milage;
	vehicle(String ma, int mi)
	{
		make=ma;
		milage=mi;
	}


	abstract  void display();
}


class two_wheeler extends vehicle
{
		char is_auto_clutch;
		two_wheeler(String ma, int mi, char ac)
		{
			super(ma,mi);
			is_auto_clutch=ac;
		}


		void display()
		{
			System.out.println("Two-wheeler Details -");
			System.out.println("Vehicle Make : "+make);
			System.out.println("Milage : "+milage);
			System.out.println("Is Auto Clutch available : "+is_auto_clutch);
		}

}



class four_wheeler extends vehicle
{
		char is_ac;
		four_wheeler(String ma, int mi, char ac)
		{
			super(ma,mi);
			is_ac=ac;
		}

		void display()
		{
			System.out.println("Four-wheeler Details - ");
			System.out.println("Vehicle Make : "+make);
			System.out.println("Milage : "+milage);
			System.out.println("Is A/C available : "+is_ac);
		}

}


class Transport
{
public static void main(String args[])
{
	two_wheeler bike=new two_wheeler("Hero Honda",60,'N');
	bike.display();
	System.out.println("\n");
	four_wheeler car=new four_wheeler("Maruti",18,'Y');
	car.display();
}
}
/*Two-wheeler Details -
Vehicle Make : Hero Honda
Milage : 60
Is Auto Clutch available : N


Four-wheeler Details -
Vehicle Make : Maruti
Milage : 18
Is A/C available : Y
/*
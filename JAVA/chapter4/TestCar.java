
/*


class Base
{
	void display()
	{
	System.out.println("Base ");
	}
}


class Derived extends Base
{
	void display()
	{
		System.out.println("Derived ");
	}
}

class A
{

	public static void main(String args[])
	{
	Base b=new Base();
	Derived d=new Derived();
	Base bd=new Derived();
	b.display();
	d.display();
	bd.display();
	}


}

*/

class Car
{
	public String make;
	protected int weight;
	private String color;
	private Car(String make,int weight,String color)
	{
		this.make=make;
		this.weight=weight;
		this.color=color;
	}
	public Car()
	{
		this("unknown",-1,"white");
	}
}

class ElectricCar extends Car
{
	private int rechargeHour;
	public ElectricCar()
	{
		this(10);
	}

	private ElectricCar(int charge)
	{
		super();
		rechargeHour=charge;
	}
}

class TestCar
{
	public static void main(String args[])
	{
		Car mycar1,mycar2;
		ElectricCar myelec1,myelec2;
		mycar1=new Car();
		mycar2=new Car("Ford",1200,"Green");
		myelec1=new ElectricCar();
		myelec2=new ElectricCar(15);
	}
}


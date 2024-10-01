interface Area  //interface defined
{
	float pi=3.14F;
	float compute(float x, float y);
}

class Rectangle implements Area
{
public float compute (float x, float y)
{
return(x*y);
}

void message()
{
System.out.println("Hi...this is first program based on interface");
}

}

/*class Triangle implements Area
{
public float compute(float x, float y)
{
return(pi*x*x);
}
}*/
class InterfaceTest1
{
public static void main(String args[])
{
Rectangle rect=new Rectangle();
rect.message();
System.out.println("Area of rectangle : "+rect.compute(5,10));
}
}
/*
Hi...this is first program based on interface
Area of rectangle : 50.0
*/
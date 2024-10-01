
interface Week
{
int Monday=1;
int Tuesday=2;
int Wednesday=3;
int Thursday=4;
int Friday=5;
int Saturday=6;
int Sunday=7;
}

class Day implements Week
{
void display(int day)
{
switch(day)
{
case Monday : System.out.println("\n Its Monday");
	break;
case Tuesday : System.out.println("\n Its Tuesday");
	break;
case Wednesday : System.out.println("\n Its Wednesday");
	break;
case Thursday : System.out.println("\n Its Thursday");
	break;
case Friday : System.out.println("\n Its Friday");
	break;
case Saturday : System.out.println("\n Its Saturday");
	break;
case Sunday : System.out.println("\n Its Sunday");
	break;
}
}
}

class InterfaceTest3
{
public static void main(String args[])
{
Day day=new Day();
day.display(5);
}
}

/*
 Its Friday
*/
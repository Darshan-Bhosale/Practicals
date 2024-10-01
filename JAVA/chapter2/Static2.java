class UseStaticMember
{
	//static variable
static int x=4;

//static method
static void display()
{
	System.out.println("x : "+x);
}

}

class Static2
{
public static void main(String args[])
{
System.out.println("x : "+UseStaticMember.x);
UseStaticMember.display();
}
}
/*
x : 4
x : 4
*/
class Static1
{
static int x=4;
static int y;
static void display(int a)
{
System.out.println("x : "+x);
System.out.println("y : "+y);
System.out.println("a : "+a);
}
static {
System.out.println("Static block=====");
y=x*x;
}

public static void main(String args[])
{
display(10);
}
}
/*
Static block=====
x : 4
y : 16
a : 10
*/
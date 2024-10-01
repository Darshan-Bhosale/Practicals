//using super to overcome name hiding
class A
{
int i;
}

//subclass B
class B extends A
{
int i; //this i hides the i in A
B(int a, int b)
{
super.i=a;        // i in A
i=b;              // i in B
}

void show ()
{
System.out.println(" i in superclass:"+super.i);
System.out.println(" i in subclass:"+i);
}
}

class UseSuper2
{
public static void main(String args[])
{
B subob=new B(10,20);
subob.show();
}
}
/*
 i in superclass:10
 i in subclass:20
*/
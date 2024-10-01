package package2;

public class Demo
{
public static void main(String args[])
{
Protection2 p=new Protection2();
Otherpackage o =new Otherpackage();
}
}


/*
D:\Books\Java\Chap 5\Chap 5 Programs\package2>cd..

D:\Books\Java\Chap 5\Chap 5 Programs>javac package2\Protection2.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package2\Otherpackage.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package2\Demo.java


D:\Books\Java\Chap 5\Chap 5 Programs\package2>cd..

D:\Books\Java\Chap 5\Chap 5 Programs>java package2.Demo
base constructor
n :1
n pri :2
n pro :3
n pub :4
derived other package constructor
n pro :3
n pub :4
base constructor
n :1
n pri :2
n pro :3
n pub :4
other package constructor
n pub :4

*/
package package1;

public  class Demo
{
public static void main(String args[])
{
Protection1 p=new Protection1();
Derived d=new Derived();
Samepackage s =new Samepackage();
}
}

/*
D:\Books\Java\Chap 5\Chap 5 Programs>javac package1\Protection1.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package1\Derived.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package1\Samepackage.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package1\Demo.java

D:\Books\Java\Chap 5\Chap 5 Programs>java package1.Demo
base constructor
n :1
n pri :2
n pro :3
n pub :4
base constructor
n :1
n pri :2
n pro :3
n pub :4
derived constructor
n :1
n pro :3
n pub :4
base constructor
n :1
n pri :2
n pro :3
n pub :4
same package constructor
n :1
n pro :3
n pub :4

D:\Books\Java\Chap 5\Chap 5 Programs>
*/
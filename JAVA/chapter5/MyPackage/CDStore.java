//A simple package
package MyPackage;

class CD
{
private  String title;
int length;
boolean avail;

CD(String t, int l,boolean a)
{
title=t;
length=l;
avail=a;
}

public void show()
{
System.out.println("\nTitle : "+title + "\nLength : " + length + "\nAvail : "+avail );
}
}

class CDStore
{
public static void main(String args[])
{
CD cd1=new CD("Jaws", 120, true);
CD cd2=new CD("Titanic", 120, true);
cd1.show();
cd2.show();
}
}
/*
Title : Jaws
Length : 120
Avail : true

Title : Titanic
Length : 120
Avail : true
*/
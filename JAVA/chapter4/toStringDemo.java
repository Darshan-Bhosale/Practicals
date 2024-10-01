class CD
{
String title;           // name of the item
int length;             // number of minutes
boolean avail;          // is the tape in the store?



CD(String t, int l,boolean a)
{
title=t;
length=l;
avail=a;
}


public String toString()
{
return "CD details : \nTitle : "+title + "\nLength : " + length + "\nAvail : "+avail;
}

}

class toStringDemo
{
public static void main(String args[])
{
CD cd=new CD("Jaws", 120, true);
String s="CD : \n"+cd;
System.out.println(cd);
System.out.println(s);
}
}
/*
CD details :
Title : Jaws
Length : 120
Avail : true

CD :
CD details :
Title : Jaws
Length : 120
Avail : true
*/
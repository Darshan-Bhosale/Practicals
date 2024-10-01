class CD
{
String title;           // name of the item
int length;             // number of minutes
boolean avail;          // is the tape in the store?

CD(CD vt)
{
title=vt.title;
length=vt.length;
avail=vt.avail;
}

CD(String t, int l,boolean a)
{
title=t;
length=l;
avail=a;
}

CD()
{
title=null;
length=0;
avail=false;
}


}


class Movie extends CD
{

String director;          // name of the director
String rating;            // G, PG, R, or X

Movie(Movie m)
{
super(m);
director=m.director;
rating=m.rating;
}

Movie(String t, int l,boolean a,String d,String r)
{
super(t,l,a);
director=d;
rating=r;
}

Movie()
{
super();
director=null;
rating=null;
}

public void show()
{
System.out.println("Title : "+title + "\nLength : " + length + "\nAvail : "+avail );
System.out.println("Director : "+director+"\nRating : "+rating);

}
}




class UseSuper1
{
public static void main(String args[])
{
Movie m1=new Movie("Jaws", 120, true,"Spielberg", "PG");
Movie m2=new Movie();
Movie m3=new Movie(m1);

m1.show();
m2.show();
m3.show();
}
}

/*
Title : Jaws
Length : 120
Avail : true
Director : Spielberg
Rating : PG

Title : null
Length : 0
Avail : false
Director : null
Rating : null

Title : Jaws
Length : 120
Avail : true
Director : Spielberg
Rating : PG
*/
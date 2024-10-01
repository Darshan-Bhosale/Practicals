//Method overriding
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

public void show()
{
System.out.println("Title : "+title + "\nLength : " + length + "\nAvail : "+avail );
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

System.out.println("Director : "+director+"\nRating : "+rating);
}
}




class OverrideMethod1
{
public static void main(String args[])
{
Movie m=new Movie("Jaws", 120, true,"Spielberg", "PG");
m.show();
}
}

/*
Director : Spielberg
Rating : PG
*/
class CD
{
String title;
int length;
boolean avail;

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

String director;
String rating;

Movie(Movie m)
{
title=m.title;
length=m.length;
avail=m.avail;
director=m.director;
rating=m.rating;
}

Movie(String t, int l,boolean a,String d,String r)
{
title=t;
length=l;
avail=a;
director=d;
rating=r;
}

Movie()
{
title=null;
length=0;
avail=false;
director=null;
rating=null;
}

public void show()
{
System.out.println("Titlet : "+title + "\nLength : " + length + "\nAvail : "+avail );
System.out.println("Director : "+director+"\nRating : "+rating);

}
}




class CDStore1
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

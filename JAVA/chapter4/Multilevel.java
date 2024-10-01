class CD
{
private String title;           // name of the item
private int length;             // number of minutes
private boolean avail;          // is the tape in the store?

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

void DisplayCD()
{
	System.out.println("Title : "+title + "\nLength : " + length + "\nAvail : "+avail );
}
}


class Movie extends CD
{

private String director;          // name of the director
private String rating;            // G, PG, R, or X

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
void DisplayMovie()
{
	System.out.println("Director : "+director+"\nRating : "+rating);
}
}


class DocumentaryFilm extends Movie
{
private String subject;
DocumentaryFilm(DocumentaryFilm df)
{
super(df);
subject=df.subject;
}

DocumentaryFilm(String t, int l,boolean a,String d,String r,String s)
{
super(t,l,a,d,r);
subject=s;
}

DocumentaryFilm()
{
super();
subject=null;
}

public void DisplayDocumentaryFilm()
{

System.out.println("Subject : "+subject);
}
}

class Multilevel
{
public static void main(String args[])
{
DocumentaryFilm df=new DocumentaryFilm("Take care", 120, true,"Spielberg", "PG","Self defense");
df.DisplayCD();
df.DisplayMovie();
df.DisplayDocumentaryFilm();
}
}
/*
Title : Take care
Length : 120
Avail : true
Director : Spielberg
Rating : PG
Subject : Self defense
*/
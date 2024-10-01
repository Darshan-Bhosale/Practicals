class CD
{
CD()
{
System.out.println("Inside CD's constructor");
}
}

class Movie extends CD
{
Movie()
{
System.out.println("Inside Movie's constructor");
}
}

class DocumentoryFilm extends Movie
{
DocumentoryFilm()
{
System.out.println("Inside DocumentoryFilm's constructor");
}
}

class ConsOrder
{
public static void main(String args[])
{
DocumentoryFilm df=new DocumentoryFilm();
}
}

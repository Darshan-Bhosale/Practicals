//Dynamic method dispatch
class CD
{
void message()
{
System.out.println("Inside CD's method");
}
}

class Movie extends CD
{
//override message
void message()
{
System.out.println("Inside Movie's method");
}
}

class DocumentoryFilm extends CD
{
//override message
void message()
{
System.out.println("Inside DocumentoryFilm's method");
}
}

class DynamicDispatch
{
public static void main(String args[])
{
CD cd=new CD();   //object of class CD
Movie m=new Movie();  //object of class Movie
DocumentoryFilm df=new DocumentoryFilm();   //objet of class DocumentoryFilm
CD r;                  //obtain a reference of type CD

r=cd;                   // r refers to CD object
r.message();

r=m;                   // r refers to Movie object
r.message();

r=df;                   // r refers to DocumentoryFilm object
r.message();
}
}

/*
Inside CD's method
Inside Movie's method
Inside DocumentoryFilm's method
*/
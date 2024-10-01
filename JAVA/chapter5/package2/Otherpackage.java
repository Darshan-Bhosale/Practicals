package package2;
import package1.*;

class Otherpackage
{

Otherpackage()
{
Protection1 p=new Protection1();
System.out.println("other package constructor");

//System.out.println("n :"+n);
//System.out.println("n pri :"+n_pri);
//System.out.println("n pro :"+n_pro);
System.out.println("n pub :"+p.n_pub);
}
}


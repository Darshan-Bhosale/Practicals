package package2;
import package1.*;

class Protection2 extends package1.Protection1
{

Protection2()
{

System.out.println("derived other package constructor");

//System.out.println("n :"+n);
//System.out.println("n pri :"+n_pri);
System.out.println("n pro :"+n_pro);
System.out.println("n pub :"+n_pub);
}
}


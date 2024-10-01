package package1;

public class Protection1
{
int n=1;
private int n_pri=2;
protected int n_pro=3;
public int n_pub=4;

public Protection1()
{
System.out.println("base constructor");

System.out.println("n :"+n);
System.out.println("n pri :"+n_pri);
System.out.println("n pro :"+n_pro);
System.out.println("n pub :"+n_pub);
}
}


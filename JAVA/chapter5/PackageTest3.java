import package2.ClassB;
class ClassC extends ClassB
{
int n=20;
void displayC()
{
	System.out.println("ClassC");
	System.out.println("m :"+m);
	System.out.println("n: "+n);
}
}



class PackageTest3
{
public static void main(String args[])
{
ClassC C=new ClassC();
C.displayB();
C.displayC();

}
}
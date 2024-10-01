import package1.*;
import package2.*;

class Hybrid
{
public static void main(String args[])
{
Result R1=new Result();
R1.get_number(123);
R1.get_marks(1200,1000);
R1.display( );
}
}

/*
D:\Books\Java\Chap 5\Chap 5 Programs>javac package1\Student.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package1\Test.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package2\Sports.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac package1\Result.java

D:\Books\Java\Chap 5\Chap 5 Programs>javac Hybrid.java

D:\Books\Java\Chap 5\Chap 5 Programs>java Hybrid
Roll No.  : 123
Marks obtained  :
Sem1 = 1200.0
Sem2 = 1000.0
Sports weight : 6.0
Total Marks : 2206.0
*/
package package1;
public class Test extends Student
{

       	float sem1, sem2;
	    public void get_marks (float s1, float s2)
        {
                sem1 = s1;
                sem2 =  s2;
        }
        public void put_marks()
        {
                 System.out.println("Marks obtained  : ");
                 System.out.println("Sem1 = "+sem1);
                 System.out.println("Sem2 = "+sem2);
        }
}
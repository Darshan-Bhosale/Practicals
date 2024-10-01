package package1;
import package2.Sports;
public class Result extends Test implements Sports
{
		float total;
        public void display()
        {
			total = sem1 + sem2 + score;
			put_number( );
			put_marks( );
			put_score( );
			System.out.println("Total Marks : "+total);
		}
	    public void put_score()
        {
                 System.out.println("Sports weight : "+score);
        }

}

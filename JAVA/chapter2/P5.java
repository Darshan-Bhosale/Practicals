/* Program to compute roots of quadratic equation */

class P5
{
	public static void main(String args[])
	{
		double a , b , c , d , e ;
		double temp , r1 , r2 ;
		int select ;

		a=2;b=3;c=6;
		temp = (b * b) - (4 * a * c) ;
		
		if (temp > 0)
			select = 0 ;
		else
			if (temp == 0)
				select = 1 ;
			else
				select = 2 ;

		switch (select)
		{
		case 0 :
			temp = Math.sqrt (temp) ;
			r1 = (-b + temp) / (2 * a) ;
			r2 = (-b - temp) / (2 * a) ;
			System.out.println("The roots are Real and Unequal.\n");
			System.out.println("The roots are : "+r1+"  "+r2);
			break ;
		case 1 :
			r1 = -b / (2 * a) ;
			r2 = r1 ;
			System.out.println("The roots are Real and Equal.\n");
			System.out.println("The roots are : "+r1+"  "+r2);
			break ;
		case 2 :
			temp = -temp ;
			temp = Math.sqrt (temp) ;
			temp = temp / (2 * a) ;
			r1 = -b / (2 * a) ;
			System.out.println("The roots are Real and Imaginary.\n");
			System.out.println("The roots are : "+r1+"+ j"+temp+" , "+r1+"- j"+temp);
			break ;
		}

	}
}
	

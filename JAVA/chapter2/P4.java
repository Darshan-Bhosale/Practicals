/*Program to compute Permutation and Combination */

class P4
{
	public static void main(String args[])
	{
		int i , n , r , P , C ;
		int factorial , temp , result ;

		n = 6; r=3;

             	for (i=1,factorial=1 ; i<=n ; i++)    /* Calculate n! */
			factorial = factorial * i ;

             	for (i=1,temp=1 ; i<=r ; i++)         /* Calculate r! */
			temp = temp * i ;

		for (i=1,result=1 ; i<=(n-r) ; i++)	/* Calculate (n-r)!*/
			result = result * i ;

		P = factorial / temp ;
		C = P / result ;

		System.out.println(" Permutation  : "+P);
		System.out.println(" Combination  :  "+C);
	}
}

/* Program to find minimum Number */

class P10
{     
     public static void main(String args[])
     { 
	        int a =3 , b = 7 , c = 0 ;
                int result;
 result = ( a < b ? a : b ) < c ? ( a < b ? a : b ) : c ;
		System.out.println(" The minimum number in "+a+", "+b+","+c+" is "+result);    
   

      }
}

/* Program to convert Rs. into paise */

class P17
{
	public static void main(String args[])
	{
		double rs=75.95;
		double paise1,paise2;
	
		paise1= rs*100;		
		System.out.println("Rs."+rs+" = "+(long)paise1+" paise");

		rs= 18.75;
		paise2= rs*100;		
		System.out.println("Rs."+rs+" = "+(long)paise2+" paise");

	}
}
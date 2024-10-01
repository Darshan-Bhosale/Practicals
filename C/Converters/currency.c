#include<stdio.h>
#include<conio.h>
main()
{
	float rupees,paisa,result;
	int currency,a,b,c,d;
	printf("***Currency Converter***\n\n");
	printf("1.Rupees Convert To Paisa");
	printf("\n2.Rupees Convert To Dollar");
	printf("\n3.Rupees Convert To Euro");
	printf("\n4.Rupees Convert To Riyal");
	printf("\n5.Rupees Convert To Dinar");
	printf("\n\nEnter Amount In Rupees:");
	scanf("%f",&rupees);
	printf("Enter Your Currency:");
	scanf("%d",&currency);
	
	switch(currency)
	{
		case 1:
		 paisa=100*rupees;
		 printf("%.f Rupees Convert To %.f Paisa",rupees,paisa);
		 break;
		case 2:
		 printf("Enter Your Dollar Amount:"); //71.12
		 scanf("%d",&a);
		 result=rupees/a;
		 printf("%.f Rupees Convert To %.f Dollar",rupees,result);
		 break;
		case 3:
		 printf("Enter Your Euro Amount:"); //81.06
		 scanf("%d",&b);
		 result=rupees/b;
		 printf("%.f Rupees Convert To %.f Euro",rupees,result);
		 break;
		case 4:
		 printf("Enter Your Riyal Amount:"); //18.96
		 scanf("%d",&c);
		 result=rupees/c;
		 printf("%.f Rupees Convert To %.f Riyal",rupees,result);
		 break;
		case 5:
		 printf("Enter Your Diner Amount:"); //233.86
		 scanf("%d",&d);
		 result=rupees/d;
		 printf("%.f Rupees Convert To %.f Diner",rupees,result);
		 break;
   	}		 
}

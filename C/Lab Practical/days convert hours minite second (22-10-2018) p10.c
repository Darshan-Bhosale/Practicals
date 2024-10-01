#include<stdio.h>
#include<conio.h>
main()
{
	int days,h,m,s;
	printf("Enter the number of day:");
	scanf("%d",&days);
	h=days/3600;
	printf("\nHours:%d",h);
	m=(days-(3600*h))/60;
	printf("\nMinites:%d",m);
	s=(days-(3600*h)-(m*60));
	printf("\nSeconds:%d",s);
	
}

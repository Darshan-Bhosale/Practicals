#include<stdio.h>
#include<conio.h>
main()
{
	int days,year,month,week;
	printf("Enter the value:");
	scanf("%d",&days);
	year=days/365;
	printf("\nEnter the years:%d",year);
	month=year/30;
	printf("\nEnter the months:%d",month);
	week=(days-(year*365))/7;
	printf("\nEnter the weeks:%d",week);
}

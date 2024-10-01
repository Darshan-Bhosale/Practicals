#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	printf("Your Monthly Income Is:");
	scanf("%d",&a);
	b=a*12;
	printf("\nAnnual Income Is:%d",b);
	c=b*12/100;
	d=b-c;
	printf("\nAnnual Income After Deducting 12 Percent:%d",d);
	printf("\n---Thanks For Using This Software---");
	printf("\n\t**Have A Nice Day**");
}

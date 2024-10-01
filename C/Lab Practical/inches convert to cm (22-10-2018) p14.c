#include<stdio.h>
#include<conio.h>
main()
{
	float inch,cm;
	printf("Program to convert inch to cm:");
	printf("\nEnter length in inch:");
	scanf("%f",&inch);
	cm=2.54*inch;
	printf("\n%f inch in cm:%f",inch,cm);
	
}

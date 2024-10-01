#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter the age of the person:");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Eligibal for voting");
	}
	else
	{
		printf("Not eligibal for voting");
	}
}

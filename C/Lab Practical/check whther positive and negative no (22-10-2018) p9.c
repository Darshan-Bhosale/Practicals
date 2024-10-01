#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if (num>0)
	{
		printf("%d is a positive number");
	}
	else
	{
		printf("%d is a negative number");
	}
	return 0;
}

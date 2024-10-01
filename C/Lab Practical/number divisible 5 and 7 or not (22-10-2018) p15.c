#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	if((num%5==0)&&(num%7==0))
	{
		printf("Number is divisible by 5 and 7");
	}
	else
	{
		printf("Number is not divisible by 5 and 7");
	}
	return 0;
}

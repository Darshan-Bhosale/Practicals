#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,n;
	clrscr();
        printf("Enter a number:");
	scanf("%d",&n);
	while(n%i!=0)
	{
		i++;
	}
	if(n==i)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a prime number");
	}
	getch();
}

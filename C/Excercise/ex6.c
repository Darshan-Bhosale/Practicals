//6.Write a program to calculate factorial of given no.
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,fact=1;
	
	printf("Enter a number:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of %d is %d\n",n,fact);
}

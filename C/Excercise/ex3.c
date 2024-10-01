//3.Write a program to print Fibonacci series from 01 to 100.
#include<stdio.h>
#include<conio.h>
main()
{
	int a=0,b=1,c,i;
	printf("FIBONACCI SERIES:-\n");
	for(i=0;i<101;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d ",c);
	}
	
}

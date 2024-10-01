#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter a number:");
	scanf("%d",&a);
	b=a*a;
	printf("Square of the number:%d",b);
	c=b*a;
	printf("\nCube of the number:%d",c);
	return 0;
}

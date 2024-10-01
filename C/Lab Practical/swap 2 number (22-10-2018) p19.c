#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter teo integer:");
	scanf("%d%d",&a,&b);
	printf("Before swaping\nFirst integer=%d\nSecond integer=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swaping\nFirst integer=%d\nSecond integer=%d",a,b);
	return 0;
}

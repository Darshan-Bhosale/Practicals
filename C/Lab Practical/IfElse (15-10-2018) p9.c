//WAP to store remainder and Quietent of a number from user input
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	c=a/b;
	printf("the quo is %d",c);
	d=a%b;
	printf("the rem	 is %d" ,d);
	return 0;
}

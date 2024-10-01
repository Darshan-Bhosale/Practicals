#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f=fopen("sum.txt","w");
	int a,b,c;
	printf("Enter value of a&b:");
	scanf("%d%d",&a,&b);
	c=a+b;
	fprintf(f,"%d+%d=%d\n",a,b,c);
	printf("data saved");
	return 0;
}

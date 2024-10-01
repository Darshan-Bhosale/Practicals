#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,add,sub,mul,mod;
	float div;
	printf("Enter two integer number:");
	scanf("%d%d",&a,&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float)a/b;
	
	printf("Addition:%d",add);
	printf("Subtraction:%d",sub);
	printf("Multiplecation:%d",mul);
	printf("Division:%2f",div);
	printf("Moduler:%d",mod);
	
	return 0;
}

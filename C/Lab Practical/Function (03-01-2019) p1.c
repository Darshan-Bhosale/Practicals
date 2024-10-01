#include<stdio.h>
void abc()
{
	printf("hello");
}
int abc1(int a,int b)
{
	int c;
	c=a+b;
	printf("Addition=%d\n",c);
}
char abc2()
{
	char k='#';
	return '#';
}
int main()
{
	int x,y;
	char z;
	printf("Funtion With no.a &no.p\n");
	abc();
	printf("Enter Two Values \n");
	scanf("%d%d",&x,&y);
	abc1(x,y);
	printf("Funtion with no A & Return");
	z=abc2();
	/*printf("Funtion With A & Retun");
	z=abc3();*/
}

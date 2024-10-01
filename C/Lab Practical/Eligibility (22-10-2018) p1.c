#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	char gen;
	float height;
	printf("Enter the gender:-");
	scanf("%c",&gen);
	
	printf("Enter the age:-");
	scanf("%d",&age);
	
	printf("Enter the heightL:-");
	scanf("%f",&height);
	(age>=18) && (gen=='M'||gen=='F'||gen=='O') && (height>4.10)? printf("Eligible") : printf("Non-Eligible");
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	char name,qua,gen='M';
	int age,exp,ch;
	
	printf("Welcome To Sahyog College Job Portal");
	printf("\n***Vacancy For IT Lecture***");
	printf("\nPress 1 For Apply 0 For Exit");
	scanf("%d",&ch);
	
	if(ch==1)
	{
	
		printf("\n1)Enter The Name:");
		scanf("%s",&name);
		printf("\n2)Your Age:");
		scanf("%d",&age);
		printf("\n3)Qualification:");
		scanf("%s",&qua);
		printf("\n4)Experience:");
		scanf("%d",&exp);
		printf("\n5)Gender:");
		scanf("%s",&gen);
	}
	else
	{
		printf("!!!!Thanks For Visit!!!!\n");
		printf("^^^^Have a nice day^^^");
	}
	
}


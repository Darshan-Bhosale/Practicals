//8.Write a program to store and print the student record by using file handling.
#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	char course[8];
	char rollno[10];
	float marks;
}s;
main()
{
FILE*fp;
	printf("ENTER STUDENT DETAILS:\n");
	printf("\nSTUDENT NAME:");
	gets(s.name);
	printf("\nCOURSE:");
	gets(s.course);
	printf("\nROLL NO.:");
	gets(s.rollno);
	printf("\nENTRANCE EXAM MARKS:");
	scanf("%f",&s.marks);
	
	printf("\nPRESS ANY KEY TO SAVE DETAILS!!!");
}

#include<stdio.h>
struct student_detail
{
	int rollno,age;
	char course[10],name[20];
}s1,s2;
main()
{
	printf("Enter detail for student 1:");
	printf("\nRoll No:");
	scanf("%d",s1.rollno);
	printf("Age:");
	scanf("%d",s1.age);
	printf("Name:");
	scanf("%s",s1.name);
	printf("Course:");
	scanf("%s",s1.course);

	printf("Detail Of Student 1\n");
	printf("Roll No:-",s1.rollno);
	printf("Age:-",s1.age);
	printf("Name:-",s1.name);
	printf("Course:-",s1.course);
	
	printf("Enter detail for student 2:");
	printf("\nRoll No:");
	scanf("%d",s2.rollno);
	printf("Age:");
	scanf("%d",s2.age);
	printf("Name:");
	scanf("%s",s2.name);
	printf("Course:");
	scanf("%s",s2.course);

	printf("Detail Of Student 2\n");
	printf("Roll No:-",s2.rollno);
	printf("Age:-",s2.age);
	printf("Name:-",s2.name);
	printf("Course:-",s2.course);

}

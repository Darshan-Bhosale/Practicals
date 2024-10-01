//5.Write a program for calculating the area of triangle.
#include<stdio.h>
#include<conio.h>
main()
{
	int b,h;
	float area;
	
	printf("Enter the value of breadth:-");
	scanf("%d",&b);
	printf("\nEnter the value of hight:-");
	scanf("%d",&h);
	
	area=(b*h)/2;
	
	printf("\nArea of the triangle= %.2f",area);

}

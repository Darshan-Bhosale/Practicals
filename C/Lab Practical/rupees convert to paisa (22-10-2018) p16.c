#include<stdio.h>
#include<conio.h>
main()
{
	int rs;
	float ps;
	printf("Enter rupees to convert into paisa:");
	scanf("%d",&rs);
	ps=rs*100;
	printf("\nPaisa of given rupees is:%f",ps);
	return 0;
}

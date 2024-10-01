#include<stdio.h>
#include<conio.h>
main()
{
	int c,b,a[10];
	int i,j,arr[2][2];
	printf("One-dimensional:-");
	for(c=0;c<10;c++)
	{
		scanf("%d",&a[c]);	
	}
	printf("\nElement Are:-\n");
	for(b=0;b<10;b++)
	{
		printf("%d\t",a[b]);
	}
	
	printf("\nTwo-dimensional:-");
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
			//printf("\nElement Are:-");
		}
	}
}

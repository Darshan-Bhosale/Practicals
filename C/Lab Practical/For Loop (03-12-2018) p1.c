#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=9;j+=2)
		{
			printf("%d%d\t",i,j);
		}
		printf("\n");
	}
}

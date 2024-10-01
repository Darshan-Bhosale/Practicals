#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			for (k=1;k<=4;k++)
			{
				printf("%d%d%d\t",i,j,k);
			}
			printf("\n");
		}	
	}
}

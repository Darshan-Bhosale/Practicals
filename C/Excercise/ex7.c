/*7.Write a program to print this pattern:
12345
1234
123
12
1*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}


#include<stdio.h>
#include<conio.h>
main()
{
	int i,arr[]={1,2,3,4,5,6,7,8,9,10};
	int p,q,a[1][10]={1,2,3,4,5,6,7,8,9,10};
	for(i=1;i<11;i++)
	{
		printf("%d\n",i);
	}
		printf("\nElement Are:-\n");
		for(p=0;p<1;p++)
		{
			for(q=0;q<10;q++)
			{
				printf("\n[%d][%d]=%d",p,a[p][q]);
			}
		}
}

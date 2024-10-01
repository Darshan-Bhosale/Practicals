#include <stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    while(i<=10)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    	i++;
	}
    
    return 0;
}

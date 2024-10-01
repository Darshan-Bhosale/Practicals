#include <stdio.h>
#include<conio.h> 
int main()
{
    int n,i;
    int sum;
 
    printf("Enter the value of N :");
    scanf("%d",&n);
 
    sum=0;
 
    for(i=1;i< n;i++)
        sum+=i;
 
    printf("\nSum is = %d",sum);
     
    return 0;
}

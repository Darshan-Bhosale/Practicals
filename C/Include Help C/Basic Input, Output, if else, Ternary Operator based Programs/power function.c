#include <stdio.h>
#include <math.h>
 
int main()
{
    int x,n;
    int result;
 
    printf("Enter the value of base: ");
    scanf("%d",&x);
 
    printf("Enter the value of power: ");
    scanf("%d",&n);
     
    result =pow((double)x,n);
 
    printf("%d to the power of %d is= %d", x,n, result);
    getch();
    return 0;
}

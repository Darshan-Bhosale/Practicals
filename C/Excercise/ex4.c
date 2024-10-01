//4.Write a program to calculate the multiplecation table for given number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;

    printf("Enter an integer:- ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
 
}

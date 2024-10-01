//2.Write a program to perform to calculate the given number is Armstrong or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
    {
    	printf("%d is an Armstrong number.",number);
	}    
    else
    {
    	printf("%d is not an Armstrong number.",number);
	}    

}

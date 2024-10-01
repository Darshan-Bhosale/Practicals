#include <stdio.h>

int main()
{ 

	//loop counter declaration
	int number;
	//variable to store limit /N
	int n;
	
	
	//assign initial value 
	//from where we want to print the numbers
	number =1;
	
	//input value of N
	printf("Enter the value of N: ");
	scanf("%d",&n);
	
	//print statement
	printf("Numbers from 1 to %d: \n",n);
	
	//while loop, that will print numbers 
	//from 1 to n
	while(number <= n)
	{
		//printing the numbers
		printf("%d ",number);
		//increasing loop counter by 1
		number++;
	}
	
	return 0;
}

#include <stdio.h>
#include<conio.h>
int main()
{ 

	//loop counter declaration
	int number;
	
	//assign initial value 
	//from where we want to print the numbers
	number =1;
	
	//print statement
	printf("Numbers from 1 to 10: \n");
	
	//while loop, that will print numbers 
	//from 1 to 10
	while(number<=10)
	{
		//printing the numbers
		printf("%d ",number);
		//increasing loop counter by 1
		number++;
	}
	
	return 0;
}

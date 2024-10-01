#include<stdio.h>
#include<conio.h>
main()
{
	float cel,fah,kel,val;
	int temperature,tempcon;
	printf("***Temperature Converter To***\n\n");
	printf("\n1. CLESIUS CONVERTER");
	printf("\n2. FAHRENHEIT CONVERTER");
	printf("\n3. KELVIN CONVERTER");	
	printf("\n\nEnter The Converter:");
	scanf("%d",&temperature);
	system("cls");
	switch(temperature)
	{
		case 1:
			printf("******Celsius Convert To******\n\n");
			
			printf("\n1. Celsius Convert To Fahrenhiet");
			printf("\n2. Celsius Convert To Kelvin");
		printf("\n\nEnter The Value:");
		scanf("%f",&val);
		printf("\nCelsius Convert To:");
		scanf("%d",&tempcon);
		switch(tempcon)
		{
			case 1:
				cel=val;
				printf("%.f Celsius Convert To %.f Fahrenheit",val,cel);
			break;
			case 2:
				cel=val;
				printf("%.f Celsius Convert To %.f Kelvin",val,cel);
			break;
		}
		break;
		
		case 2:
			printf("******Fahrenheit Convert To******\n\n");
			
			printf("\n1. Fahrenheit Convert To Celsius");
			printf("\n2. Fahrenheit Convert To Kelvin");
		printf("\n\nEnter The Value:");
		scanf("%f",&val);
		printf("\nFahrenheit Convert To:");
		scanf("%d",&tempcon);
		switch(tempcon)
		{
			case 1:
				fah=val;
				printf("%.f Fahrenheit Convert To %.f Celsius",val,fah);
			break;
			case 2:
				fah=val;
				printf("%.f Fahrenheit Convert To %.f Kelvin",val,fah);
			break;
		}
		break;
		
		case 3:
			printf("******Kelvin Convert To******\n\n");
			
			printf("\n1. Kelvin Convert To Celsius");
			printf("\n2. Kelvin Convert To Fahrenheit");
		printf("\n\nEnter The Value:");
		scanf("%f",&val);
		printf("\nKelvin Convert To:");
		scanf("%d",&tempcon);
		switch(tempcon)
		{
			case 1:
				kel=val;
				printf("%.f Kelvin Convert To %.f Celsius",val,kel);
			break;
			case 2:
				kel=val;
				printf("%.f Kelvin Convert To %.f Fahrenheit",val,kel);
			break;
		}
		break;
	}
}	

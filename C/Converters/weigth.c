#include<stdio.h>
#include<conio.h>
main()
{
	float ton,kg,g,milig,microg,impton,stone,pound,ounce,cal;
	int weigth,wecon;
	printf("***Weigth Converter***\n\n");
	printf("\n1. TONNE CONVERTER");
	printf("\n2. KILOGRAM CONVERTER");
	printf("\n3. GRAM CONVERTER");
	printf("\n4. MILIGRAM CONVERTER");
	printf("\n5. MICROGRAM CONVERTER");
	printf("\n6. IMPERIAL TON CONVERTER");
	printf("\n7. STONE CONVERTER");
	printf("\n8. POUND CONVERTER");
	printf("\n9. OUNCE CONVERTER");
	printf("\n\nEnter The Weigth:");
	scanf("%d",&weigth);
	system("cls");
	switch(weigth)
	{
		case 1:
			printf("******Tonne Convert To******\n\n");
			
			printf("\n1. Tonne Convert To Kilogram");
			printf("\n2. Tonne Convert To Gram");
			printf("\n3. Tonne Convert To Miligram");
			printf("\n4. Tonne Convert To Microgram");
			printf("\n5. Tonne Convert To Imperial Ton");
			printf("\n6. Tonne Convert To Stone");
			printf("\n7. Tonne Convert To Pound");
			printf("\n8. Tonne Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nTonne Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				ton=cal*1000;
				printf("%.f Tonne Convert To %.f Kilogram",cal,ton);
			break;
			case 2:
				ton=cal*1e+6;
				printf("%.f Tonne Convert To %.f Gram",cal,ton);
			break;
			case 3:
				ton=cal*1e+9;
				printf("%.f Tonne Convert To %.f Miligram",cal,ton);
			break;
			case 4:
				ton=cal*1e+12;
				printf("%.f Tonne Convert To %.f Microgram",cal,ton);
			break;
			case 5:
				ton=cal/1.016;
				printf("%.f Tonne Convert To %.f Imperial Ton",cal,ton);
			break;
			case 6:
				ton=cal*157.473;
				printf("%.f Tonne Convert To %.f Stone",cal,ton);
			break;
			case 7:
				ton=cal*2204.623;
				printf("%.f Tonne Convert To %.f Pound",cal,ton);
			break;
			case 8:
				ton=cal*35273.962;
				printf("%.f Tonne Convert To %.f Ounce",cal,ton);
			break;								
		}
		break;
		
		case 2:
			printf("******Kilogram Convert To******\n\n");
			
			printf("\n1. Kilogram Convert To Tonne");
			printf("\n2. Kilogram Convert To Gram");
			printf("\n3. Kilogram Convert To Miligram");
			printf("\n4. Kilogram Convert To Microgram");
			printf("\n5. Kilogram Convert To Imperial Ton");
			printf("\n6. Kilogram Convert To Stone");
			printf("\n7. Kilogram Convert To Pound");
			printf("\n8. Kilogram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nKilogram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				kg=cal/1000;
				printf("%.f Kilogram Convert To %.f Tonne",cal,kg);
			break;
			case 2:
				kg=cal*1000;
				printf("%.f Kilogram Convert To %.f Gram",cal,kg);
			break;
			case 3:
				kg=cal*1e+6;
				printf("%.f Kilogram Convert To %.f Miligram",cal,kg);
			break;
			case 4:
				kg=cal*1e+9;
				printf("%.f Kilogram Convert To %.f Microgram",cal,kg);
			break;
			case 5:
				kg=cal/1016.047;
				printf("%.f Kilogram Convert To %.f Imperial Ton",cal,kg);
			break;
			case 6:
				kg=cal/6.35;
				printf("%.f Kilogram Convert To %.f Stone",cal,kg);
			break;
			case 7:
				kg=cal*2.205;
				printf("%.f Kilogram Convert To %.f Pound",cal,kg);
			break;
			case 8:
				kg=cal*35.274;
				printf("%.f Kilogram Convert To %.f Ounce",cal,kg);
			break;								
		}
		break;
		
		case 3:
			printf("******Gram Convert To******\n\n");
			
			printf("\n1. Gram Convert To Tonne");
			printf("\n2. Gram Convert To kilogram");
			printf("\n3. Gram Convert To Miligram");
			printf("\n4. Gram Convert To Microgram");
			printf("\n5. Gram Convert To Imperial Ton");
			printf("\n6. Gram Convert To Stone");
			printf("\n7. Gram Convert To Pound");
			printf("\n8. Gram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nGram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				g=cal/1e+6;
				printf("%.f Gram Convert To %.f Tonne",cal,g);
			break;
			case 2:
				g=cal/1000;
				printf("%.f Gram Convert To %.f Kilogram",cal,g);
			break;
			case 3:
				g=cal*1000;
				printf("%.f Gram Convert To %.f Miligram",cal,g);
			break;
			case 4:
				g=cal*1e+6;
				printf("%.f Gram Convert To %.f Microgram",cal,g);
			break;
			case 5:
				g=cal/1.016e+6;
				printf("%.f Gram Convert To %.f Imperial Ton",cal,g);
			break;
			case 6:
				g=cal/6350.293;
				printf("%.f Gram Convert To %.f Stone",cal,g);
			break;
			case 7:
				g=cal/453.592;
				printf("%.f Gram Convert To %.f Pound",cal,g);
			break;
			case 8:
				g=cal/28.35;
				printf("%.f Gram Convert To %.f Ounce",cal,g);
			break;								
		}
		break;
		
		case 4:
			printf("******Miligram Convert To******\n\n");
			
			printf("\n1. Miligram Convert To Tonne");
			printf("\n2. Miligram Convert To kilogram");
			printf("\n3. Miligram Convert To Gram");
			printf("\n4. Miligram Convert To Microgram");
			printf("\n5. Miligram Convert To Imperial Ton");
			printf("\n6. Miligram Convert To Stone");
			printf("\n7. Miligram Convert To Pound");
			printf("\n8. Miligram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nMiligram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				milig=cal/1e+9;
				printf("%.f Miligram Convert To %.f Tonne",cal,milig);
			break;
			case 2:
				milig=cal/1e+6;
				printf("%.f Miligram Convert To %.f Kilogram",cal,milig);
			break;
			case 3:
				milig=cal/1000;
				printf("%.f Miligram Convert To %.f Gram",cal,milig);
			break;
			case 4:
				milig=cal*1000;
				printf("%.f Miligram Convert To %.f Microgram",cal,milig);
			break;
			case 5:
				milig=cal/1.016e+9;
				printf("%.f Miligram Convert To %.f Imperial Ton",cal,milig);
			break;
			case 6:
				milig=cal/6.35e+6;
				printf("%.f Miligram Convert To %.f Stone",cal,milig);
			break;
			case 7:
				milig=cal/453592.37;
				printf("%.f Miligram Convert To %.f Pound",cal,milig);
			break;
			case 8:
				milig=cal/28349.523;
				printf("%.f Miligram Convert To %.f Ounce",cal,milig);
			break;								
		}
		break;
		
		case 5:
			printf("******Microgram Convert To******\n\n");
			
			printf("\n1. Microgram Convert To Tonne");
			printf("\n2. Microgram Convert To kilogram");
			printf("\n3. Microgram Convert To Gram");
			printf("\n4. Microgram Convert To Miligram");
			printf("\n5. Microgram Convert To Imperial Ton");
			printf("\n6. Microgram Convert To Stone");
			printf("\n7. Microgram Convert To Pound");
			printf("\n8. Microgram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nMicrogram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				microg=cal/1e+12;
				printf("%.f Microgram Convert To %.f Tonne",cal,microg);
			break;
			case 2:
				microg=cal/1e+9;
				printf("%.f Microgram Convert To %.f Kilogram",cal,microg);
			break;
			case 3:
				microg=cal/1e+6;
				printf("%.f Microgram Convert To %.f Gram",cal,microg);
			break;
			case 4:
				microg=cal/1000;
				printf("%.f Microgram Convert To %.f Miligram",cal,microg);
			break;
			case 5:
				microg=cal/1.016e+12;
				printf("%.f Microgram Convert To %.f Imperial Ton",cal,microg);
			break;
			case 6:
				microg=cal/6.35e+9;
				printf("%.f Microgram Convert To %.f Stone",cal,microg);
			break;
			case 7:
				microg=cal/4.536e+8;
				printf("%.f Microgram Convert To %.f Pound",cal,microg);
			break;
			case 8:
				microg=cal/2.835e+7;
				printf("%.f Microgram Convert To %.f Ounce",cal,microg);
			break;								
		}
		break;
		
		case 6:
			printf("******Imperial Ton To******\n\n");
			
			printf("\n1. Imperial Ton Convert To Tonne");
			printf("\n2. Imperial Ton Convert To kilogram");
			printf("\n3. Imperial Ton Convert To Gram");
			printf("\n4. Imperial Ton Convert To Miligram");
			printf("\n5. Imperial Ton Convert To Microgram");
			printf("\n6. Imperial Ton Convert To Stone");
			printf("\n7. Imperial Ton Convert To Pound");
			printf("\n8. Imperial Ton Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nImperial Ton Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				impton=cal*1.016;
				printf("%.f Imperial Ton Convert To %.f Tonne",cal,impton);
			break;
			case 2:
				impton=cal*1016.047;
				printf("%.f Imperial Ton Convert To %.f Kilogram",cal,impton);
			break;
			case 3:
				impton=cal*1.016e+6;
				printf("%.f Imperial Ton Convert To %.f Gram",cal,impton);
			break;
			case 4:
				impton=cal*1.016e+9;
				printf("%.f Imperial Ton Convert To %.f Miligram",cal,impton);
			break;
			case 5:
				impton=cal*1.016e+12;
				printf("%.f Imperial Ton Convert To %.f Microgram",cal,impton);
			break;
			case 6:
				impton=cal*160;
				printf("%.f Imperial Ton Convert To %.f Stone",cal,impton);
			break;
			case 7:
				impton=cal*2240;
				printf("%.f Imperial Ton Convert To %.f Pound",cal,impton);
			break;
			case 8:
				impton=cal*35840;
				printf("%.f Imperial Ton Convert To %.f Ounce",cal,impton);
			break;								
		}
		break;
		
		case 7:
			printf("******Stone To******\n\n");
			
			printf("\n1. Stone Convert To Tonne");
			printf("\n2. Stone Convert To kilogram");
			printf("\n3. Stone Convert To Gram");
			printf("\n4. Stone Convert To Miligram");
			printf("\n5. Stone Convert To Microgram");
			printf("\n6. Stone Convert To Imperial Ton");
			printf("\n7. Stone Convert To Pound");
			printf("\n8. Stone Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nStone Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				stone=cal/157.473;
				printf("%.f Stone Convert To %.f Tonne",cal,stone);
			break;
			case 2:
				stone=cal*6.35;
				printf("%.f Stone Convert To %.f Kilogram",cal,stone);
			break;
			case 3:
				stone=cal*6350.293;
				printf("%.f Stone Convert To %.f Gram",cal,stone);
			break;
			case 4:
				stone=cal*6.35e+6;
				printf("%.f Stone Convert To %.f Miligram",cal,stone);
			break;
			case 5:
				stone=cal*6.35e+9;
				printf("%.f Stone Convert To %.f Microgram",cal,stone);
			break;
			case 6:
				stone=cal/160;
				printf("%.f Stone Convert To %.f Imperial Ton",cal,stone);
			break;
			case 7:
				stone=cal*14;
				printf("%.f Stone Convert To %.f Pound",cal,stone);
			break;
			case 8:
				stone=cal*224;
				printf("%.f Stone Convert To %.f Ounce",cal,stone);
			break;								
		}
		break;
		
		case 8:
			printf("******Pound To******\n\n");
			
			printf("\n1. Pound Convert To Tonne");
			printf("\n2. Pound Convert To kilogram");
			printf("\n3. Pound Convert To Gram");
			printf("\n4. Pound Convert To Miligram");
			printf("\n5. Pound Convert To Microgram");
			printf("\n6. Pound Convert To Imperial Ton");
			printf("\n7. Pound Convert To Stone");
			printf("\n8. Pound Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nPound Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				pound=cal/2204.623;
				printf("%.f Pound Convert To %.f Tonne",cal,pound);
			break;
			case 2:
				pound=cal/2.205;
				printf("%.f Pound Convert To %.f Kilogram",cal,pound);
			break;
			case 3:
				pound=cal*453.592;
				printf("%.f Pound Convert To %.f Gram",cal,pound);
			break;
			case 4:
				pound=cal*453592.37;
				printf("%.f Pound Convert To %.f Miligram",cal,pound);
			break;
			case 5:
				pound=cal*4.536e+8;
				printf("%.f Pound Convert To %.f Microgram",cal,pound);
			break;
			case 6:
				pound=cal/2240;
				printf("%.f Pound Convert To %.f Imperial Ton",cal,pound);
			break;
			case 7:
				pound=cal/14;
				printf("%.f Pound Convert To %.f Stone",cal,pound);
			break;
			case 8:
				pound=cal*16;
				printf("%.f Pound Convert To %.f Ounce",cal,pound);
			break;								
		}
		break;
		
		case 9:
			printf("******Ounce To******\n\n");
			
			printf("\n1. Ounce Convert To Tonne");
			printf("\n2. Ounce Convert To kilogram");
			printf("\n3. Ounce Convert To Gram");
			printf("\n4. Ounce Convert To Miligram");
			printf("\n5. Ounce Convert To Microgram");
			printf("\n6. Ounce Convert To Imperial Ton");
			printf("\n7. Ounce Convert To Stone");
			printf("\n8. Ounce Convert To Pound");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nOunce Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				ounce=cal/35273.962;
				printf("%.f Ounce Convert To %.f Tonne",cal,ounce);
			break;
			case 2:
				ounce=cal/35.274;
				printf("%.f Ounce Convert To %.f Kilogram",cal,ounce);
			break;
			case 3:
				ounce=cal*28.35;
				printf("%.f Ounce Convert To %.f Gram",cal,ounce);
			break;
			case 4:
				ounce=cal*28349.523;
				printf("%.f Ounce Convert To %.f Miligram",cal,ounce);
			break;
			case 5:
				ounce=cal*2.835e+7;
				printf("%.f Ounce Convert To %.f Microgram",cal,ounce);
			break;
			case 6:
				ounce=cal/35840;
				printf("%.f Ounce Convert To %.f Imperial Ton",cal,ounce);
			break;
			case 7:
				ounce=cal/224;
				printf("%.f Ounce Convert To %.f Stone",cal,ounce);
			break;
			case 8:
				ounce=cal/16;
				printf("%.f Ounce Convert To %.f Pound",cal,ounce);
			break;								
		}
		break;
	}
}

